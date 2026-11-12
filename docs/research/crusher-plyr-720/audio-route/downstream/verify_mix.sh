#!/bin/zsh
# Read-only check of the game/chat mix state. No writes.
#   usage: verify_mix.sh <label>     (captures go to live/mix/verify-<label>-*)
# Exit status: 0 when every read succeeded, 1 when any read failed or got no reply (the capture set is incomplete).
cd "${0:A:h}" || exit 1
mkdir -p live/mix; l=${1:-now}; failed=0
# step <name> <command...>: run one read, print its exit status, and count a nonzero status as a failure.
step() { local name=$1; shift; "$@"; local rc=$?; echo "$name: exit $rc"; (( rc == 0 )) || (( failed++ )); }
step "nvkey F601" eval 'swift query_ram.swift nvkey:F601 > live/mix/verify-$l-nvkey-f601.json'
step "ratio getter" eval 'swift query_ram.swift app-conf:000B > live/mix/verify-$l-ratio.json'
step "ratio byte" swift dump_ram.swift 0x0420f35c 4 live/mix/verify-$l-ratio-byte.bin
step "boot copy" swift dump_ram.swift 0x0420f440 4 live/mix/verify-$l-boot-copy.bin
step "ratio cache" swift dump_ram.swift 0x0424754c 4 live/mix/verify-$l-ratio-cache.bin
step "gains" swift dump_ram.swift 0x0423f35c 12 live/mix/verify-$l-gains.bin
(( failed == 0 )) || { echo "INCOMPLETE: $failed of 6 reads failed"; exit 1; }
echo "PASS: all 6 reads succeeded"

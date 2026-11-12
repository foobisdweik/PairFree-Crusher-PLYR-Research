#!/bin/zsh
# Read-only check of the game/chat mix state. No writes.
#   usage: verify_mix.sh <label>     (captures go to live/mix/verify-<label>-*)
cd "${0:A:h}" || exit 1
mkdir -p live/mix; l=${1:-now}
swift query_ram.swift nvkey:F601 > live/mix/verify-$l-nvkey-f601.json; echo "nvkey F601: exit $?"
swift query_ram.swift app-conf:000B > live/mix/verify-$l-ratio.json; echo "ratio getter: exit $?"
swift dump_ram.swift 0x0420f35c 4 live/mix/verify-$l-ratio-byte.bin; echo "ratio byte: exit $?"
swift dump_ram.swift 0x0420f440 4 live/mix/verify-$l-boot-copy.bin; echo "boot copy: exit $?"
swift dump_ram.swift 0x0424754c 4 live/mix/verify-$l-ratio-cache.bin; echo "ratio cache: exit $?"
swift dump_ram.swift 0x0423f35c 12 live/mix/verify-$l-gains.bin; echo "gains: exit $?"

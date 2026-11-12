#!/bin/zsh
# Approved reversible test of the game/chat mix ratio.
# SET_GAME_CHAT_MIX_RATIO = RACE 0x2C82, config 0x000B, one byte (0..20). Writes NVKEY 0xF601.
#   usage: mix_test.sh <decimal ratio>    (10 = both 0 dB; 0 = the value found on 2026-11-11)
cd "${0:A:h}" || exit 1
mkdir -p live/mix
r=$1; [[ $r == <-> && $r -le 20 ]] || { echo "usage: mix_test.sh 0..20"; exit 2; }
h=$(printf %02x $r)
swift query_ram.swift app-conf:000B > live/mix/$r-ratio-before.json; echo "ratio before: exit $?"
swift query_ram.swift raw:055a0500822c0b00$h > live/mix/$r-command.json; echo "command: exit $?"
swift query_ram.swift app-conf:000B > live/mix/$r-ratio-after.json; echo "ratio after: exit $?"
swift dump_ram.swift 0x0423f35c 12 live/mix/$r-gains-after.bin; echo "gains after: exit $?"

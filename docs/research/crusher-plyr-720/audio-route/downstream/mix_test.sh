#!/bin/zsh
# Approved reversible test of the game/chat mix ratio.
# SET_GAME_CHAT_MIX_RATIO = RACE 0x2C82, config 0x000B, one byte (0..20). Writes NVKEY 0xF601.
#   usage: mix_test.sh <decimal ratio>    (10 = both 0 dB; 0 = the value found on 2026-11-11)
cd "${0:A:h}" || exit 1
# reply_byte <json> <index>: one byte (decimal) of the Master's relayed reply (the last 05 5D notification).
reply_byte() { local x=$(jq -r --argjson i $2 '[.events[]|select(.kind=="notification" and (.hex|startswith("055d")))|.hex]|last // "" | .[($i*2):($i*2+2)]' $1); [[ -n $x ]] && echo $((16#$x)); }
mkdir -p live/mix
r=$1; [[ $r == <-> && $r -le 20 ]] || { echo "usage: mix_test.sh 0..20"; exit 2; }
h=$(printf %02x $r)
swift query_ram.swift app-conf:000B > live/mix/$r-ratio-before.json; echo "ratio before: exit $?"
swift query_ram.swift raw:055a0500822c0b00$h > live/mix/$r-command.json; rc=$?; echo "command: exit $rc"
# query_ram.swift exits 1 when the Bluetooth session failed or the Master rejected the command (nonzero status),
# and 3 when no Master reply arrived (unconfirmed). Exit 3 is not success: the readback below decides.
(( rc == 1 )) && { echo "command failed; see the JSON file"; exit 1; }
(( rc == 3 )) && echo "command unconfirmed; checking the readback"
swift query_ram.swift app-conf:000B > live/mix/$r-ratio-after.json; rb=$?; echo "ratio after: exit $rb"
swift dump_ram.swift 0x0423f35c 12 live/mix/$r-gains-after.bin; echo "gains after: exit $?"
# The GET_APP_COMMON_CONF 000B reply carries the ratio at relayed-frame byte 17.
got=$(reply_byte live/mix/$r-ratio-after.json 17)
(( rb == 0 )) && [[ $got == $r ]] || { echo "FAIL: ratio readback is '${got:-none}', expected $r"; exit 1; }
echo "PASS: ratio reads back as $r"

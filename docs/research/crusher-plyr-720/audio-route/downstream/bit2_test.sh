#!/bin/zsh
# Approved reversible test of 0x58 mask bit 2 (MCU pin P0.5).
# RACE id 0x0002, sub 0, value v: firmware sets bit 2 = (v == 0).
#   clear: value 1 -> bit 2 = 0     restore: value 0 -> bit 2 = 1
cd "${0:A:h}" || exit 1
# reply_byte <json> <index>: one byte (decimal) of the Master's relayed reply (the last 05 5D notification).
reply_byte() { local x=$(jq -r --argjson i $2 '[.events[]|select(.kind=="notification" and (.hex|startswith("055d")))|.hex]|last // "" | .[($i*2):($i*2+2)]' $1); [[ -n $x ]] && echo $((16#$x)); }
mkdir -p live/bit2
step=$1
case $step in
  clear) v=01 ;;
  restore) v=00 ;;
  *) echo "usage: bit2_test.sh clear|restore"; exit 2 ;;
esac
swift query_ram.swift 0x0420f4c4 > live/bit2/$step-mask-before.json; echo "mask before: exit $?"
swift query_ram.swift raw:055a0400020000$v > live/bit2/$step-command.json; rc=$?; echo "command: exit $rc"
# query_ram.swift exits 1 when the Bluetooth session failed or the Master rejected the command (nonzero status),
# and 3 when no Master reply arrived (unconfirmed). Exit 3 is not success: the readback below decides.
(( rc == 1 )) && { echo "command failed; see the JSON file"; exit 1; }
(( rc == 3 )) && echo "command unconfirmed; checking the readback"
swift query_ram.swift 0x0420f4c4 > live/bit2/$step-mask-after.json; rb=$?; echo "mask after: exit $rb"
# The READ_ADDRESS reply carries the mask's low byte at relayed-frame byte 21.
got=$(reply_byte live/bit2/$step-mask-after.json 21); want=$(( v == 0 ? 1 : 0 ))
(( rb == 0 )) && [[ -n $got ]] && (( (got >> 2 & 1) == want )) || { echo "FAIL: mask low byte is '${got:-none}', expected bit 2 = $want"; exit 1; }
echo "PASS: mask bit 2 reads back as $want"

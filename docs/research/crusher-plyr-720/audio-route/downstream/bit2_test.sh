#!/bin/zsh
# Approved reversible test of 0x58 mask bit 2 (MCU pin P0.5).
# RACE id 0x0002, sub 0, value v: firmware sets bit 2 = (v == 0).
#   clear: value 1 -> bit 2 = 0     restore: value 0 -> bit 2 = 1
cd "${0:A:h}" || exit 1
mkdir -p live/bit2
step=$1
case $step in
  clear) v=01 ;;
  restore) v=00 ;;
  *) echo "usage: bit2_test.sh clear|restore"; exit 2 ;;
esac
swift query_ram.swift 0x0420f4c4 > live/bit2/$step-mask-before.json; echo "mask before: exit $?"
swift query_ram.swift raw:055a0400020000$v > live/bit2/$step-command.json; rc=$?; echo "command: exit $rc"
# query_ram.swift exits 1 when the Bluetooth session failed or the Master rejected the command (nonzero status).
(( rc == 1 )) && { echo "command failed; see the JSON file"; exit 1; }
swift query_ram.swift 0x0420f4c4 > live/bit2/$step-mask-after.json; echo "mask after: exit $?"

#!/bin/zsh
# Read-only RAM reads of the output arbiter state over the existing BLE link.
# Each read is the documented relay 0x0D01 + READ_ADDRESS 0x1680 query. No writes.
cd "${0:A:h}" || exit 1
mkdir -p live
for k in votes ext-mask ext-handle max-level; do
  swift query_ram.swift "$k" > "live/ram-$k.json"
  echo "$k: exit $?"
done

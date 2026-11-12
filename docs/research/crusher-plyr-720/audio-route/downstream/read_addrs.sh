#!/bin/zsh
# Read-only: four-byte RAM reads at the given hex addresses. No writes.
cd "${0:A:h}" || exit 1
mkdir -p live
for a in "$@"; do swift query_ram.swift "$a" > "live/ram-$a.json"; echo "$a: exit $?"; done

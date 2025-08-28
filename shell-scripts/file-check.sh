#!/usr/bin/env bash
# usage: ./file-check.sh <path>
TARGET="$1"
if [ -z "$TARGET" ]; then
echo "Usage: $0 <path-to-file>"
exit 1
fi
if [ -e "$TARGET" ]; then
echo "File exists. Details:"
ls -l -- "$TARGET"
else
echo "Not found: $TARGET"
exit 2
fi

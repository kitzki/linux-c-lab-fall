#!/usr/bin/env bash
# usage: ./file-count.sh [DIR] [LOGFILE]
DIR="${1:-.}"
LOG="${2:-file-count.log}"
if [ ! -d "$DIR" ]; then
echo "Directory not found: $DIR" >&2
exit 1
fi
TS=$(date "+%Y-%m-%d %H:%M:%S")
echo "File type results" >> "$LOG"
# Count by extension (case-insensitive); files without dots -> noext
find "$DIR" -type f -printf "%f\n" \
| awk -F. 'NF>1{print tolower($NF)} NF==1{print "noext"}' \
| sort | uniq -c \
| while read count ext; do printf "%s\t%s\n" "$count" "$ext" >> "$LOG"; done
echo >> "$LOG"
echo "Wrote results to $LOG"

#!/usr/bin/env bash
read -p "Enter a number: " NUM
if [ "$NUM" -gt 10 ] 2>/dev/null; then
echo "Greater than 10"
else
echo "10 or less"
fi
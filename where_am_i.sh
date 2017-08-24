#!/bin/sh
ip=$(ifconfig | grep "inet " | cut -d' ' -f 2 | awk '{if ($0 != "127.0.0.1") print }')
if [[ "$ip" ]]; then
echo "$ip"
else
echo "Je suis perdu!"
fi
exit 0

#!/bin/sh
cat $1 | grep -i -n ".*nicolas.*bauer.*\|.*bauer.*nicolas" | grep -o "\([0-9]\{6\}\-[0-9]\{4\}\)"

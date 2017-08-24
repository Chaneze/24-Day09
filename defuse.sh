#!/bin/sh
touch -A -000001 -a bomb.txt
stat -s bomb.txt|tr -s ' ' | cut -d ' ' -f9 | cut -d '=' -f2

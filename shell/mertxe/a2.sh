#!/bin/sh
# https://www.emertxe.com/embedded-systems/linux-systems/ls-assignments/#
# A2

if [ $# -ne 1 ]; then
	echo "Usage: #0 <number>"
	exit 1
fi

for num in `seq 1 $1`
do
	for num2 in `seq 1 $num`
	do
		printf "$num2 "
	done
	echo ""
done

#!/bin/sh
# https://www.emertxe.com/embedded-systems/linux-systems/ls-assignments/#
# A3

if [ $# -ne 1 ]; then
	echo "Usage: $0 <number>"
	exit 1
fi

start=1
end=1
window=0

while [ 1 ]
do
	for num in `seq $start $end`
	do
		if [ $num -gt $1 ]; then
			echo ""
			exit 0
		fi
		printf "$num "
	done
	echo ""

	window=`expr $window + 1`
	start=`expr $start + $window`
	end=`expr $end + $window + 1`
done


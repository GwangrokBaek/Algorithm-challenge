#!/bin/sh

if [ $# -ne 3 ]; then
	echo "Usage: $0 <num> <expr> <num>"
	exit 1
fi

calculate()
{
		if [ $2 == "x" ]; then
			echo $1 \* $3 | bc
		else
			echo $1 $2 $3 | bc
		fi
}

calculate $1 $2 $3

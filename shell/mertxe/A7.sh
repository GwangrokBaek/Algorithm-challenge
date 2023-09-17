#!/bin/sh

if [ $# -eq 0 ]; then
	echo "No arguments passed"
	exit 1
fi

compare()
{
		max=$1

		for num in $*
		do
			if [ $num -ge $max ]; then
					max=$num
			fi
		done

		echo Larget value is $max
}

compare $*

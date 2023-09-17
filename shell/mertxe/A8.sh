#!/bin/sh

if [ $# -eq 0 ]; then
	echo "Error: No argument passed"
	exit 1
fi

if [ ${#1} -eq 1 ]; then
	echo "Error: pass a multi-digit number"
	exit 1
fi

reverse()
{
	length=`expr ${#1} - 1`

	printf "Reversed number - "

	for ((num=$length; num >= 0; num--));
	do
			if [ $num == $length ] && [ ${1:$num:1} -eq 0 ]; then
				continue
			else
				printf "${1:$num:1}"
			fi
	done

	echo ""
}

reverse $1

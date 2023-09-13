#!/bin/sh

first=0
second=0

display()
{
		echo "Enter the numbers to addition"
}

get()
{
		read first second
}

display
get
echo "Answer is `echo $first+$second | bc`"

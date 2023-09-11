#!/bin/sh
menu=0
ip=""
name=""

readAccount()
{
		echo "Please enter remote system ip address"
		read ip

		echo "Please enter the user name"
		read name
}

doSsh()
{
		readAccount	
		ssh $name@$ip
}

doScp()
{
		readAccount

		echo "1 - local → remote"
		echo "2 - remote → local"
		echo "Please choose an option"
		read menu
		if [ $menu -ne 1 -a $menu -ne 2 ]; then
				echo "Choose 1 or 2"
				exit 1
		fi

		echo "Please enter source file location"
		read source

		echo "Please enter destination file location"
		read dest

		if [ $menu -eq 1 ]; then
				scp $source $name@$ip:$dest
		elif [ $menu -eq 2 ]; then
				scp $name@$ip:$source $dest
		fi
}

printMenu()
{
		echo "1 - ssh"
		echo "2 - scp"
		echo "Select an option to continue"

		read menu
		if [ $menu = 1 ]; then
			doSsh
		elif [ $menu = 2 ]; then
			doScp
		else
			echo "Choose 1 or 2"
			exit 1
		fi
}

printMenu

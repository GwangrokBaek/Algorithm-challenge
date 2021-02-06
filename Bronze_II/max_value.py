#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/2562
#

num = [int(input()) for i in range(9)]
print(max(num), num.index(max(num))+1, sep='\n')

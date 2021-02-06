#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/2439
#

n = int(input())

for i in range(n):
    for j in range(n):
        if j < (n-i-1):
            print(' ', end='')
        else:
            print('*', end='')
    print()

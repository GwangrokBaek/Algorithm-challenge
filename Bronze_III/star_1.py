#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/2438
#

n = int(input())

for i in range(n):
    for j in range(n):
        if j <= i:
            print('*', end='')
    print()

#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/2675
#

import sys

n = int(sys.stdin.readline().rstrip('\n'))
for _ in range(n):
    r, s = sys.stdin.readline().rstrip('\n').split()
    for i in s:
        print(i*int(r), end='')
    print()

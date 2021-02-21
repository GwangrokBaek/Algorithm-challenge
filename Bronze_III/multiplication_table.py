#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/2739
#

import sys

n = int(sys.stdin.readline().rstrip('\n'))
for i in range(1, 10):
    print('%d * %d = %d' %(n, i, (n*i)))

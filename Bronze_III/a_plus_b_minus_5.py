#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/10952
#

import sys

for line in sys.stdin:
    a, b = map(int, line.split())
    if a == 0 and b == 0: continue
    print(a+b)

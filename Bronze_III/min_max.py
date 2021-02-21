#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/10818
#

import sys

n = int(sys.stdin.readline().rstrip('\n'))
numbers = list(map(int, sys.stdin.readline().rstrip('\n').split()))
print(min(numbers), max(numbers))

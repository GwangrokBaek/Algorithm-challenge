#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/2884
#

h, m = map(int, input().split())
m -= 45
if m < 0:
    if h - 1 < 0:
        h = 24
    print(h - 1, 60 + m)
else:
    print(h, m)

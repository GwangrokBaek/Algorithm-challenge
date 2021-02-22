#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/2577
#

res = 1
for _ in range(3):
    res *= int(input())
res = list(map(int, str(res)))
for i in range(10):
    print(res.count(i))

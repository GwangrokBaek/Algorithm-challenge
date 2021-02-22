#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/10871
#

_, x = map(int, input().split())
numbers = list(map(int, input().split()))

for i in numbers:
    if i < x:
        print(i, end=' ')

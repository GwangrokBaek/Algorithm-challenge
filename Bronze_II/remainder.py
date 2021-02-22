#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/3052
#

list = []
for _ in range(10):
    list.append(int(input()) % 42)
list = set(list)
print(len(list))

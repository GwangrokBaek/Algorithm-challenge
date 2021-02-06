#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/2475
#

value = [x**2 for x in map(int, input().split())]
print(sum(value) % 10)

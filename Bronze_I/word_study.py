#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/1157
#
import sys

word = sys.stdin.readline().rstrip('\n').upper()
max = (0, 0)
for i in ''.join(set(word)):
    tmp = word.count(i)
    if tmp > max[1]:
        max = (i, tmp)
    elif tmp == max[1]:
        max = ('?', tmp)

print(max[0])


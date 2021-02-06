#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/1546
#

n = int(input())
score = list(map(int, input().split()))
maximum = max(score)
for i in range(n):
    score[i] = score[i] / maximum * 100
print(sum(score)/n)

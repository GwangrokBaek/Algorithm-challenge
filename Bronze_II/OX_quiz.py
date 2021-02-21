#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/8958
#

import sys

n = int(sys.stdin.readline().rstrip('\n'))
for _ in range(n):
    score = 0
    temp_score = 1
    quiz = sys.stdin.readline().rstrip('\n')
    for i in quiz:
        if i != 'X':
            score += temp_score
            temp_score += 1
        else:
            temp_score = 1
    print(score)

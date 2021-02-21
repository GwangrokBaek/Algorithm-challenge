#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/2920
#

import sys

n = list(map(int, (sys.stdin.readline().rstrip('\n')).split()))

if n[1] == n[0] + 1:
    flag = 'ascending'
    for i in range(len(n) - 1):
        if n[i+1] == n[i] + 1:
            continue
        else:
            flag = 'mixed'
            break
elif n[1] == n[0] - 1:
    flag = 'descending'
    for i in range(len(n) - 1):
        if n[i+1] == n[i] - 1:
            continue
        else:
            flag = 'mixed'
            break
else:
    flag = 'mixed'
print(flag)

##################################

'''
a = list(map(int, input()).split())

if a == sorted(a):
    print('ascending')
elif a == sorted(a, reverse=True):
    print('descending')
else:
    print('mixed')
'''

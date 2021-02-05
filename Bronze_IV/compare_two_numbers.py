#
# Author : Kwangrok Baek (zester926@gmail.com)
# URL : https://www.acmicpc.net/problem/1330
#

a, b = map(int, input().split())
print('>') if a > b else print('<') if a < b else print('==')

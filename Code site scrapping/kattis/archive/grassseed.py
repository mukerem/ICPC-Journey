# Time: 2022-08-13 09:22:37
# title: Grass Seed Inc.
# language: Python 3


c = float(input())
n =int(input())
a = 0
for i in range(n):
    x,y = map(float, input().split())
    a += x*y
a *= c
print('%.7f' % a)
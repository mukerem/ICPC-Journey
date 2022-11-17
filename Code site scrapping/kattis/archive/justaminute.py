# Time: 2022-08-15 20:27:49
# title: Just a Minute
# language: Python 3


a = 0
b = 0
t = 0
n = int(input())
for i in range(n):
    m, s = map(int, input().split())
    a += m
    b += s

c = b / 60
c /= a
if c <= 1:
    print('measurement error')
else:
    print(c )

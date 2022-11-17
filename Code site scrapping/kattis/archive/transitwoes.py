# Time: 2022-08-13 12:39:24
# title: Transit Woes
# language: Python 3


s,t,n = map(int, input().split())
d = list(map(int, input().split()))
b = list(map(int, input().split()))
c = list(map(int, input().split()))

a = d[0]
for i in range(n):
    if a%c[i] != 0:
        a += (c[i] - a%c[i])
    a += b[i] + d[i+1]
if(a <= t):print('yes')
else:print('no')
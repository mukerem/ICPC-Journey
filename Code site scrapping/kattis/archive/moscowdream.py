# Time: 2022-08-18 12:07:35
# title: Moscow Dream
# language: Python 3


a,b,c,n = map(int, input().split())
if min(a,b,c) == 0:
    print('NO')
elif a+b+c < n or n<3:
    print('NO')
else:
    print('YES')
# Time: 2022-08-15 17:01:30
# title: Paul Eigon
# language: Python 3


n,p,q = map(int, input().split())
a = p+q+1
if ((a+n-1) // n) % 2 != 0:
    print('paul')
else:
    print('opponent')
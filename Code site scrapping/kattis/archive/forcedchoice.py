# Time: 2022-08-13 20:54:44
# title: Forced Choice
# language: Python 3


n, s, p = map(int, input().split())
for i in range(p):
    a = list(map(int, input().split()))
    b = a[0]
    a = a[1:]
    if s in a:
        print('KEEP')
    else:
        print('REMOVE')
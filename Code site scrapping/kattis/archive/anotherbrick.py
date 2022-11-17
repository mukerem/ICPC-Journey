# Time: 2022-08-23 14:40:02
# title: Another Brick in the Wall
# language: Python 3


h,w,n = map(int, input().split())
a = list(map(int, input().split()))

k = 0
s = 0
c = False
for i in range(n):
    s += a[i]
    if s == w:
        s = 0
        k += 1
        if k == h:
            c = True
            break
    elif s>w:
        break
if c == True:
    print('YES')
else:
    print('NO')
from math import *
while True:
    a = input().split()
    if a == ['0']:
        break
    b,p,m = a
    b = int(b)
    x = int(p, b)
    y = int(m, b)
    z = x % y
    ans = ''
    while z:
        r = z%b
        ans = str(r) + ans
        z = z//b
    if ans:
        print (ans)
    else:
        print(0)

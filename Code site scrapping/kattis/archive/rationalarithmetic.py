# Time: 2019-11-19 16:34:10
# title: Rational Arithmetic
# language: Python 3


from math import gcd
for _ in range(int(input())):
    a,b,op,c,d = input().split()
    a = int(a)
    b = int(b)
    c = int(c)
    d = int(d)
    if op == '+' or op == '-':
        if op == '-':
            c *= -1
        x = a*d + b*c
        y = b*d
    else:
        if op == '/':
            c,d = d,c
        x = a*c
        y = b*d
    g = gcd(x,y)
    if x*y<0:
        x = -abs(x)
        y = abs(y)
    if x<0 and y<0:
        x = abs(x)
        y = abs(y)
    print("%d / %d" % (x//g, y//g))


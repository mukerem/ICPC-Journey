# Time: 2019-11-22 20:25:38
# title: Square Deal
# language: Python 3


import sys
def yes():
    print('YES')
    sys.exit(0)
def no():
    print('NO')
    sys.exit(0)
a,b = [int(i) for i in input().split()]
c,d = [int(i) for i in input().split()]
e,f = [int(i) for i in input().split()]

def square(a,b,c,d,e,f):
    if a == c:
        x = a
        y = b+d
        if x == e and x == y + f:
            yes()
        elif y == f and y == x+e:
            yes()
    elif b == d:
        x = b
        y = a+c
        if x == e and x == y + f:
            yes()
        elif y == f and y == x+e:
            yes()
    
square(a,b,c,d,e,f)
square(a,b,e,f,c,d)
square(c,d,e,f,a,b)
square(a,b,c,d,f,e)
square(a,b,e,f,d,c)
square(c,d,e,f,b,a)
square(b,a,c,d,e,f)
square(b,a,e,f,c,d)
square(d,c,e,f,a,b)
square(b,a,c,d,f,e)
square(b,a,e,f,d,c)
square(d,c,e,f,b,a)
    
square(a,b,d,c,e,f)
square(a,b,f,e,c,d)
square(c,d,f,e,a,b)
square(a,b,d,c,f,e)
square(a,b,f,e,d,c)
square(c,d,f,e,b,a)
square(b,a,d,c,e,f)
square(b,a,f,e,c,d)
square(d,c,f,e,a,b)
square(b,a,d,c,f,e)
square(b,a,f,e,d,c)
square(d,c,f,e,b,a)
no()
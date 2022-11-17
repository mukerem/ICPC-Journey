# Time: 2022-08-14 19:29:20
# title: Hitting the Targets
# language: Python 3


m = int(input())
r = []
c = []
for  _ in range(m):
    a = input().split()
    if a[0] == 'rectangle':
        b = tuple(map(int, a[1:]))
        r.append(b)
    else:
        b = tuple(map(int, a[1:]))
        c.append(b)
def cir(x,y, r, a,b):
    if(x-a)**2 + (y-b)**2 <= r*r:
        return 1
    return 0
    
def rec(x1,y1,x2,y2,a,b):
    if x1<=a<=x2 and y1<=b<=y2:
        return 1
    return 0
    
n = int(input())
for _ in range(n):
    x, y = map(int, input().split())
    d = 0
    for i in r:
        d += rec(*i, x, y)
    for i in c:
        d += cir(*i, x, y)
    print(d)
    
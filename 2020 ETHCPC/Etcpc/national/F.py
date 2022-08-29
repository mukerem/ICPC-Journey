import sys
from math import ceil
sys.stdin = open("ole.in", 'r')
for  _ in range(int(input())):
    g1 = [[0, int(i)] for i in input().split()]
    g2 = [[0,int(i)] for i in input().split()]
    def p(x,y):
        if x[1] > y[1]:
            x[1] += 1
            y[1] -= 1
            x[0] += 3
        
        elif x[1] < y[1]:
            x[1] -= 1
            y[1] += 1
            y[0] += 3
    
        else:
            x[0] += 1
            y[0] += 1
        #if(x[1] < 0): x[1]=0
        #if(y[1] < 0): y[1] = 0


    p(g1[0], g1[1])
    p(g1[2], g1[3])
    p(g1[0], g1[2])
    p(g1[1], g1[3])
    p(g1[0], g1[3])
    p(g1[1], g1[2])

    p(g2[0], g2[1])
    p(g2[2], g2[3])
    p(g2[0], g2[2])
    p(g2[1], g2[3])
    p(g2[0], g2[3])
    p(g2[1], g2[2])
    '''
    for i in g1:
        i[1] *= -1
    for i in g2:
        i[1] *= -1
    '''
    g1.sort(reverse=True)
    g2.sort(reverse=True)
    a = g1[0][1] 
    b = g1[1][1]
    c = g2[0][1]
    d = g2[1][1]

    '''
    if g1[1][0] == g1[2][0]:
        h = random.randint(1,2)
        b = g1[h]
    if g2[1][0] == g2[2][0]:
        h = random.randint(1,2)
        d = g2[h]
    '''
    '''
    if a[1] > d[1]:
        a[1] += 1
        e = a
    elif a[1] < d[1]:
        d[1] += 1
        e = d
    else:
        e = a


    if c[1] > b[1]:
        c[1] += 1
        f = c
    elif c[1] < b[1]:
        b[1] += 1
        f = b
    else:
        f = c

    if e[1] > f[1]:
        e[1] += 1
        ans = e
    elif e[1] < f[1]:
        f[1] += 1
        ans = f
    else:
        ans = e
    '''
    if a == d:e = a
    else: e = max(a,d) + 1
    if b == c:f = b
    else: f = max(b,c) + 1

    if e == f:ans=e
    else: ans = max(e,f) + 1


    print(ans)

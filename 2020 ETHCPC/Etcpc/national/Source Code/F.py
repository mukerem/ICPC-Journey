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

    g1.sort(reverse=True)
    g2.sort(reverse=True)
    a = g1[0][1] 
    b = g1[1][1]
    c = g2[0][1]
    d = g2[1][1]

   
    if a == d:e = a
    else: e = max(a,d) + 1
    if b == c:f = b
    else: f = max(b,c) + 1

    if e == f:ans=e
    else: ans = max(e,f) + 1


    print(ans)

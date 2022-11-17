n = input()
from math import sqrt
for i in range(n):
    a,b = [float(c) for c in  raw_input().split()]
    e = a*a + b*b
    d = sqrt(4*b*b + 4 * (a*a-1)*e)
    k1 = (2 * b + d)/( 2 * e)
    k2 = (2 * b - d)/( 2 * e)
    if a == 0:
        h1 = -sqrt(1 - k1*k1)
        h2 = sqrt(1 - k2*k2)
    else:
        h1 = (1 - k1*b)/a
        h2 = (1 - k2*b)/a
        if a < 0:
            k1, k2 = k2, k1
            h1,h2 = h2,h1
    x1 = k1-b
    y1 = a-h1
    z1 = a * k1 - b * h1

    x2 = k2-b
    y2 = a-h2
    z2 = a * k2 - b * h2
    print "(%.9f,%.9f,%.9f,%.9f,%.9f,%.9f)"%(x1, y1, z1, x2, y2, z2)

    

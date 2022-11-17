# Time: 2022-08-21 10:49:29
# title: Beavergnaw
# language: Python 3


from math import pi as p
while 1:
    D, V = map(int, input().split())
    if D+ V == 0:break
    d1 = 0
    d2 = D
    V = p*D**3/4 - V
    while d1 <= d2:
        d = (d1 + d2)/2
        v = p/12 * (D*D +D*d + d*d)*(D-d) + p/4 * (d**3)
        if abs(v - V) < 1e-6:
            print(d)
            break
        elif v < V:
            d1 = d
        else:
            d2 = d
        
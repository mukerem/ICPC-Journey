from math import log2, ceil
def egg(n, e):
    if e == 1:
        return n
    a = [i for i in range(1, 41)]
    for i in range(e-2):
        b = []
        t = 0
        for j in a:
            t += j
            b.append(t)
        a = b
    k = 0
    while n > 0:
        if k >= 40:
            break
        n -= a[k]
        k += 1
    if k == 40:
        return 33
    return k
for i in range(int(input())):
    n, e = map(int, input().split())
    a = egg(n, e)
    b = int(floor(log2(n))) + 1
    if e >= b:
        a = b
    if a > 32:
        print('Impossible')
    else:
        print(a)

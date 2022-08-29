from math import sqrt, ceil, floor
from random import randint, random
for file in range(20,30):
    f1 = open("../secret/" + str(file+1) + ".in", 'w')
    f2 = open("../secret/" + str(file+1) + ".out", 'w')
    t = randint(90, 100)
    f1.write("%d\n" % t)
    
    for _ in range(t):
        a = randint(100000, int(1e6)) + (random() if random() > 0.2 else 0)
        b = randint(100000, int(1e6)) + (random() if random() > 0.2 else 0)
        m = randint(100000, int(1e6))
        f1.write("%f %f %d\n" % (a,b,m))
        l = abs(a-b) + 1
        r = a+b - 1
        l = int(floor(l))
        r = int(ceil(r))
        m = int(m)
        if r <= m:
            f2.write("%d %d\n" % (l, r))
        elif l<= m:
            f2.write("%d %d\n" % (l, m))
        else:
            f2.write("-1\n")
    f1.close()
    f2.close()

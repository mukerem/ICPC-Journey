from math import ceil
from math import sqrt
from random import randint
M = int(1e9 + 7)
for file in range(20,30):
    f1 = open("../secret/" + str(file+1) + ".in", 'w')
    f2 = open("../secret/" + str(file+1) + ".out", 'w')
    t = randint(90, 100)
    f1.write("%d\n" % t)

    for _ in range(t):
        a = = randint(1, 1000)
        b = = randint(1, 1000)
        v = = randint(1, int(1e9))
        f1.write("%d %d %s\n" % (a, b, v))
        ans = 4*a*b*b*v*v
        ans = ans ** (1/3.0)
        ans *= 3
        f2.write("%.2f\n" % ans)
    

    for _ in range(t):
        k = randint(int(1e8), int(1e9))
        f1.write("%d\n" % k)
        if k == 1:
            print(0)
            continue
        y = ((k-1)*k)//2
        y = y% M
        z = pow(2, k-2, M)
        
        ans = (y * z) % M
        f2.write("%d\n" % ans)
    f1.close()
    f2.close()

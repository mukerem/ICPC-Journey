from random import randint

from math import sqrt

for file in range(10):
    f1 = open("../secret/" + str(file+1) + ".in", 'w')
    f2 = open("../secret/" + str(file+1) + ".out", 'w')
    t = randint(1, 10)
    f1.write("%d\n" % t)
    
    for _ in range(t):
        n = randint(1, int(1e3))
        f1.write("%d\n" % n)
        b = n
        d = int(sqrt(1 + 8*n))
        c = -1 + d
        c //= 2
        ans = n + c
        if not d*d == 1 + 8*n:
            ans += 1
        f2.write("%d\n" % ans)
    
    f1.close()
    f2.close()



from math import ceil
from math import sqrt
from random import randint
M = int(1e9 + 7)
for file in range(10):
    f1 = open("../secret/" + str(file+1) + ".in", 'w')
    f2 = open("../secret/" + str(file+1) + ".out", 'w')
    t = randint(1, 10)
    f1.write("%d\n" % t)
    
    for _ in range(t):
        k = randint(1, int(1e4))
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

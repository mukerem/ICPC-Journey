from math import ceil
from random import randint

for test in range(30):
    f1 = open("A/sample/" + str(test + 1) + ".in", 'w')
    f2 = open("A/sample/" + str(test + 1) + ".out", 'w')
    t = randint(20, 100)
    f1.write("%d\n" % t)
    for _ in range(t):
        
        n = randint(2, 360)
        k = randint(2, 360)
        a = []
        for i in range(n):
            a.append(randint(0, 359))
            
        f1.write("%d %d\n" % (n, k))
        for i in a:
            f1.write("%d " % i)
        
        a.sort()
        a.append(a[0] + 360)
        m = 0
        for i in range(n):
            m = max(m, a[i+1] - a[i])
        ans = 360 - m
        ans = int(ceil(ans / k))
        #print(m)
        f1.write("\n")
        f2.write("%d\n" % ans)
    f2.close()
    f1.close()

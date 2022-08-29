from random import randint
for file in range(10,20):
    f1 = open("../secret/" + str(file+1) + ".in", 'w')
    f2 = open("../secret/" + str(file+1) + ".out", 'w')
    t = randint(100, 10000)
    f1.write("%d\n" % t)
    
    for _ in range(t):
        n = randint(10000, int(1e6))
        f1.write("%d\n" % n)
        ans = (n*n + 1)*(2*n - 1) // 2
        f2.write("%d\n" %ans)
    
    f1.close()
    f2.close()

from math import ceil
from random import randint

for test in range(30):
    f1 = open("K/sample/" + str(test + 1) + ".in", 'w')
    f2 = open("K/sample/" + str(test + 1) + ".out", 'w')
    t = randint(1, 100)
    f1.write("%d\n" % t)
    for _ in range(t):
        s1 = randint(1, 1e9)
        s2 = randint(1, 1e9)
        p = randint(1, 1e9)
        h = randint(1, 1e9)
        x = randint(0, 1e9)
        z = randint(p, 1e18)
        f1.write("%d %d %d %d %d %d\n" % (s1, s2, p, x, h, z))
        dis = z - p
        t1 = dis / s1
        t2 = z / s2
        if t1 <= t2:
            f2.write("0\n")
        else:
            y = int(ceil((t1 - t2)/ h))
            if y <= x:
                f2.write("%d\n" % y)
            else:
                f2.write("Impossible\n")
    f1.close()
    f2.close()

test = 30
f1 = open("K/sample/" + str(test + 1) + ".in", 'w')
f2 = open("K/sample/" + str(test + 1) + ".out", 'w')
t = randint(1, 100)
f1.write("%d\n" % t)
for _ in range(t):
    s1 = randint(1, 1e6)
    s2 = randint(1, 1e9)
    p = randint(1, 1e6)
    h = randint(1, 1e7)
    x = randint(0, 1e6)
    z = randint(p, 1e18)
    f1.write("%d %d %d %d %d %d\n" % (s1, s2, p, x, h, z))
    dis = z - p
    t1 = dis / s1
    t2 = z / s2
    if t1 <= t2:
        f2.write("0\n")
    else:
        y = int(ceil((t1 - t2)/ h))
        if y <= x:
            f2.write("%d\n" % y)
        else:
            f2.write("Impossible\n")
f1.close()
f2.close()

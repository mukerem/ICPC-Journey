from random import randint, choice
import string
letters = string.ascii_letters

for test in range(30):
    f1 = open("M/sample/" + str(test + 1) + ".in", 'w')
    f2 = open("M/sample/" + str(test + 1) + ".out", 'w')
    t = randint(1, 100)
    f1.write("%d\n" % t)
    for k in range(t):
        n = randint(1, 100)
        f1.write("%d\n" % n)
        a = []
        x = set()
        y = set()
        while len(x) < n:
            x.add(randint(1, 1000))
        # printing letters
        while len(y) < n:
            b =  ''.join(choice(letters) for i in range(10))
            y.add(b)
        x = list(x)
        y = list(y)
        for i in range(n):
            a.append((x[i], y[i]))
            f1.write("%s %d\n" % (y[i], x[i]))
        
        a.sort()
        f2.write("%s\n" % a[-1][1])

    f1.close()
    f2.close()

from random import randint

for test in range(30):
    f1 = open("E/sample/" + str(test + 1) + ".in", 'w')
    f2 = open("E/sample/" + str(test + 1) + ".out", 'w')
    t = randint(1, 100)
    f1.write("%d\n" % t)
    for _ in range(t):
        s = set()
        while len(s) < 3:
            c = chr(96 + randint(1, 8)) + str(randint(1, 8))
            b = chr(96 + randint(1, 8)) + str(randint(1, 8))
            a = chr(96 + randint(1, 8)) + str(randint(1, 8))
            s.clear()
            s.add(c)
            s.add(b)
            s.add(a)

        f1.write("%s %s %s\n" % (c,b,a))
        if a[0] == b[0]:
            if a[0] == c[0]:
                if a[1] < c[1] and c[1] < b[1]:
                    f2.write("NO\n")
                elif a[1] > c[1] and c[1] > b[1]:
                    f2.write("NO\n")
                else:
                    f2.write("YES\n")
            else:
                f2.write("YES\n")
        elif a[1] == b[1]:
            if a[1] == c[1]:
                if a[0] < c[0] and c[0] < b[0]:
                    f2.write("NO\n")
                elif a[0] > c[0] and c[0] > b[0]:
                    f2.write("NO\n")
                else:
                    f2.write("YES\n")
            else:
                f2.write("YES\n")
        else:
            f2.write("NO\n")
    f1.close()
    f2.close()

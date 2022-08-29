from random import randint
f = open("c.in", "w")
for i in range(5000):
    x = randint(400000, 500000)
    f.write("%d\n" % x)
f.write("0")
f.close()

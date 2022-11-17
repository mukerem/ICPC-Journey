x, y = input().split()
a = x[0]
c = int(x[1:])
b = y[0]
d = int(y[1:])

a = ord(a) - 96
b = ord(b) - 96

def good(a, b):
    if a < 1 or a > 11 or b < 1 or b > 11:
        return False
    a = abs(a-6)
    if a + b > 11:
        return False
    return True

def move1(a, b):
    c = []
    u, v = 1, 1
    while 1:
        if a >= 6:
            v = 0
        a += u
        b += v
        if not good(a, b):
            break
        c.append((a, b))
    return c

def move2(a, b):
    c = []
    u, v = -1, 0
    while 1:
        if a <= 6:
            v = -1
        a += u
        b += v
        if not good(a, b):
            break
        c.append((a, b))
    return c

def move3(a, b):
    c = []
    u, v = -1, 1
    while 1:
        if a <= 6:
            v = 0
        a += u
        b += v
        if not good(a, b):
            break
        c.append((a, b))
    return c

def move4(a, b):
    c = []
    u, v = 1, 0
    while 1:
        if a >= 6:
            v = -1
        a += u
        b += v
        if not good(a, b):
            break
        c.append((a, b))
    return c

def move5(a, b):
    c = []
    u, v = 0, 1
    while 1:
        a += u
        b += v
        if not good(a, b):
            break
        c.append((a, b))
    return c

def move6(a, b):
    c = []
    u, v = 0, -1
    while 1:
        a += u
        b += v
        if not good(a, b):
            break
        c.append((a, b))
    return c
    
h = [[0 for i in range(12)] for j in range(12)]
p = {}
fun = [move1, move2, move3, move4, move5, move6]
for i in range(1, 12): # a - k
    for j in range(1,12):
        if j-i >= 6:
            break
        p[(i,j)] = [[0 for ii in range(12)] for jj in range(12)]
        for fun1 in fun:
            q = fun1(i, j)
            for z in q:
                for fun2 in fun:
                    y = fun2(*z)
                    for f1, f2 in y:
                        p[(i,j)][f1][f2] += 1

#print(c)
#print(p[(a, c)])
print(p[(a, c)][b][d])
#for fun1 in fun:
#    print(fun1(a,c))

# Time: 2022-08-24 20:51:40
# title: Genetic Search
# language: Python 3



while 1:
    s = input()
    if s == '0':
        break
    a,b = s.split()
    x = 0
    n = len(a)
    for i in range(len(b)):
        if a == b[i:i+n]:
             x += 1
    y = 0
    ya = set()
    for  i in range(len(b)):
        c = a[:i] + a[i+1:]
        ya.add(c)
    for j in ya:
        for i in range(len(b)):
            if j == b[i:i+n-1]:
                 y += 1
    z = 0
    za = set()
    w = ['A', 'C', 'G', 'T']
    for i in range(len(b) + 1):
        for j in w:
            c = a[:i] + j + a[i:]
            za.add(c)
    for j in za:
        for i in range(len(b)):
            if j == b[i:i+n+1]:
                 z += 1
    print(x,y,z)

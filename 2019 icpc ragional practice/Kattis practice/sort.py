n,k = [int(i) for i in raw_input().split()]
x = [int(i) for i in raw_input().split()]
d = []
fre = {}
for i in  x:
    if not i in d:
        d.append(i)
    if i in fre:
        fre[i] += 1
    else:
        fre[i] = 1
a = []
for i in fre:
    a.append((-fre[i], d.index(i), i))
a.sort()
for i,j,k in a:
    for z in range(-i):
        print k, 

"""
x = raw_input()
lenn = len(list(set(x)))
if lenn<=2:
    print 0
else:
    s = {}
    for i in x:
        if i in s:
            s[i] += 1
        else:
            s[i] = 1
    k = []
    for i in s:
        k.append((s[i],i))
    k.sort()
    summ = 0
    for i in range(lenn - 2):
        summ += k[i][0]
    print summ
#print s
#print k
"""
for _ in range(input()):
    p,r,f = [int(i) for i in raw_input().split()]
    c = 0
    while f>=p:
        p = p*r
        c += 1
    print c
        
        

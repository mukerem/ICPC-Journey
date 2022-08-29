n,z = [int(i) for i in raw_input().split()]
mafia = [[0,0,None,True]] + [[0,i+1, None, True] for i in range(n-1)]
x = [int(k) - 1 for k in raw_input().split()]
print x
k = 1
for i in x:
    mafia[i][3] = False
    mafia[k][0] = mafia[i][0]+1
    mafia[k][1] = k
    mafia[k][2] = i
    k += 1
print mafia
new = []
for i in mafia:
    if i[3]:
        new.append(i)
new.sort(reverse=True)
abc = set()
for i in range(z):
    c = new[i]
    while c[2] != None:
        abc.add(c[1])
        c = mafia[c[2]]
    abc.add(c[1])
print len(abc)
print new
print abc

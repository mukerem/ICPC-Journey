# Time: 2022-08-18 23:20:58
# title: Set!
# language: Python 3


def same(x,y,z):
    r = [x,y,z]
    w = []
    for i in range(4):
        a = set()
        for j in range(3):
            a.add(r[j][i])
        w.append(len(a))
    #print(w)
    if w.count(1) == 3 and w.count(3) == 1:
        return 1
    if w.count(1) == 1 and w.count(3) == 3:
        return 1
    if w.count(1) == 2 and w.count(3) == 2:
        return 1
    if w.count(3) == 4:
        return 1
    if w.count(1) == 4:
        return 1
    return 0
    
a = []
for i in range(4):
    a.append(input().split())
c = []
for i in a:
    c.extend(i)
#print(c)
b = []
for ii in range(12):
    for jj in range(ii+1, 12):
        for kk in range(jj+1, 12):
            
            i = c[ii]
            j = c[jj]
            k = c[kk]
            d = same(i,j,k)
            if d:
                f = (ii + 1, jj + 1, kk + 1)
                b.append(f)
if b:
    for i in b:
        print(*i)
else:
    print('no sets')
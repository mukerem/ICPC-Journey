n = input()
x = []
for i in range(n):
    x.append(raw_input())
y = []
for i in range(n):
    a = ''
    for j in range(n):
        a += x[j][i]
    y.append(a)
ok = 1
for i in range(n):
    c = 0
    for j in range(n):
        if x[i][j] == 'W':
            c += 1
    if c*2 != n:
        ok = False
        break
if ok:
    for i in range(n):
        c = 0
        for j in range(n):
            if x[j][i] == 'W':
                c += 1
        if c*2 != n:
            ok = False
            break
if ok:
    for i in x:
        if 'WWW' in i or 'BBB' in i:
            ok = False
            break
    for i in y:
        if 'WWW' in i or 'BBB' in i:
            ok = False
            break  
if ok:
    print 1
else:
    print 0

n = input()
for i in range(n):
    d = raw_input()[1:-1]
    if d:
        e = d.split(',')
        x = {j.split(':')[0]:j.split(':')[1] for j in e}
    else:
        x = {}
    d = raw_input()[1:-1]
    if d:
        e = d.split(',')
        y = {j.split(':')[0]:j.split(':')[1] for j in e}
    else:
        y = {}
    a = []
    b = []
    c = []
    for j in x:
        if j not in y:
            a.append(j)
        elif x[j] != y[j]:
            c.append(j)
    for j in y:
        if j not in x:
            b.append(j) 
    c.sort()
    a.sort()
    b.sort()
    if b:
        print '+'+str(','.join(b))
    if a:
        print '-'+str(','.join(a))

    if c:
        print '*'+str(','.join(c))
        
    if a or b or c:
        pass
    else:
        print 'No changes'
    print

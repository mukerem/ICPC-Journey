x,y = [int(i) for i in raw_input().split()]
l = [[]for i in range(x+1)]
for i in range(y):
    a,b = [int(i) for i in raw_input().split()]
    l[a].append(b)
    l[b].append(a)
l.pop(0)
for i in l:
    if len(i) == 0:
        print 'Isolated'
    else:
        i.sort()
        for k in i:
            print  k,
        print 

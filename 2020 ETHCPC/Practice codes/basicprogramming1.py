n,t = [int(i) for i in raw_input().split()]
a = [int(i) for i in raw_input().split()]

if t == 1:
    print 7
elif t == 2:
    if a[0] > a[1]:print "Bigger"
    elif a[0] == a[1]:print "Equal"
    else: print "Smaller"
elif t == 3:
    r = a[:3]
    r.sort()
    print r[1]
elif t == 4:
    print sum(a)
elif t == 5:
    print sum([i for i in a if i%2 == 0] )
elif t == 6:
    s = ''
    
    for i in a:
        s += chr(97 + i%26)
    print s
elif t == 7:
    c = {i: False for i in a}
    i = 0
    c[0] = True
    while True:
        
        
        i = a[i]
        if i >= n:
            print 'Out'
            break
        if i == (n - 1):
            print 'Done'
            break
        if c[i]:
            print "Cyclic"
            break
        c[i] = True
        

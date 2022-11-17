a,b,c = [int(i) for i in raw_input().split()]
e = a*3 + b * 2 + c
if e>= 8:
    print "Province or ",
elif e>= 5:
    print 'Duchy or ',
elif e>= 2:
    print 'Estate or ',
if e>=6:
    print 'Gold'
elif e>= 3:
    print 'Silver'
elif e>=0:
    print 'Copper'

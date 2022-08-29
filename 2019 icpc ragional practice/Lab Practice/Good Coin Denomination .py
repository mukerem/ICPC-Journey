t = input()
for i in range(t):
    a = [int(i) for i in raw_input().split()]
    b = a[0]
    a.pop(0)
    for k in range(b-1):
        if a[k+1] < 2 * a[k]:
            print 'Denominations:',
            for z in a:
                print z,
            print '\nBad coin denominations!'
            break
    else:
        print 'Denominations:',
        for z in a:
            print z,
        print '\nGood coin denominations!'
    print



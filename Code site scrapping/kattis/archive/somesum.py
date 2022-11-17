n = input()
if n%2 == 1:
    print 'Either'
else:
    n /= 2
    if n%2 == 0:
        print 'Even'
    else:
        print 'Odd'

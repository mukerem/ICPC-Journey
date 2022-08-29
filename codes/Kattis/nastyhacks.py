n = input()
for i in range(n):
    a,b,c = [int(j) for  j in raw_input().split()]
    if a + c == b:
        print 'does not matter'
    elif a+c<b:
        print 'advertise'
    else:
        print 'do not advertise'

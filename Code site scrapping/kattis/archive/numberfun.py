n = input()
for i in range(n):
    a,b,c = [int(k) for k in raw_input().split()]
    if a+b == c:
        print 'Possible'
    elif a*b == c:
        print 'Possible'
    elif abs(a-b) == c:
        print 'Possible'
    elif a == b* c:
        print 'Possible'
    elif b == a * c:
        print 'Possible'
    else:
        print 'Impossible'

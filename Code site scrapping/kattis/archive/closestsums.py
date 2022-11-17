def binary(x, key):
    l = 0
    r = len(x) - 1
    while l < r:
        m = (l+r)//2
        if(x[m] == key):
            return x[m]
        elif x[m] > key:
            r = m
        else:
            l = m
            
        if l == r:
            return x[l]
        elif r-l == 1:
            if x[r] - key < key -x[l]:
                return x[r]
            else:
                return x[l]
z = 1
while 1:
    try:
        n = input()
        a = []
        for i in range(n):
            a.append(input())
        m = input()
        b = []
        for i in range(m):
            b.append(input())
        print 'Case %d:' % z
        z += 1
        a.sort()
        close = 100000000
        lenb = len(b)
        lena = len(a)
        for i in range(lenb):
            first = b[i]
            for j in range(lena):
                
                sec = a[j]
                c = first - sec
                d = binary(a[:j] + a[j+1:], c)
                summ = sec + d
                if first == summ:
                    print 'Closest sum to %d is %d.' % (first, sec + d)
                    break
                else:
                    if abs(first - summ) < abs(first - close) :
                        close = summ
            else:
                print 'Closest sum to %d is %d.' % (first, close)
    except EOFError:
        break


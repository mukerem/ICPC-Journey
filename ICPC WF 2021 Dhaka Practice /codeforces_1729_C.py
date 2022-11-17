for _ in range(int(input())):
    s = input()
    a = []
    b = s[0]
    c = s[-1]
    if b<c:
        for i,v in enumerate(s):
            if b<=v<=c:
                a.append((v, i))
        
        a.sort()
        m = 0
        for i in range(len(a)-1):
            m += abs(ord(a[i][0]) - ord(a[i+1][0]))
        print(m, len(a))
        for i,j in a:
            print(j+1, end=' ')
        print()
    else:
        for i,v in enumerate(s):
            if b>=v>=c:
                a.append((v, -i))
        
        a.sort(reverse=True)
        m = 0
        for i in range(len(a)-1):
            m += abs(ord(a[i][0]) - ord(a[i+1][0]))
        print(m, len(a))
        for i,j in a:
            print(-j+1, end=' ')
        print()

for _ in range(input()):
    name = raw_input().upper()
    m,n,bbb = [int(i) for i in raw_input().split()]
    x = {}
    ans = []
    for i in range(m):
        a,b = raw_input().split()
        x[a] = int(b)
    for i in range(n):
        y = raw_input()
        k = input()
        t = 0
        for s in range(k):
            a,b = raw_input().split()
            t += int(b) * x[a]
        if t <= bbb:
            ans.append((t, y))
    ans.sort()
    print name
    if ans:
        for j, k in ans:
            print k
    else:
        print 'Too expensive!'
    print

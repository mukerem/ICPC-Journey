def solve():
    n = int(input())
    a = list(map(int, input().split()))
    c = [[] for i in range(32)]
    q = {}
    for i in a:
        if i in q:
            q[i]+=1
        else:
            q[i] = 1
        x = bin(i)[2:]
        z = len(x)
        for j in range(z):
            if x[j] == '1':
                c[-z+j].append((x[j:], i))    
    v = [False]*32
    d = 0
    #for i in c:
    #   print(i)
    s = []
    while d<32:
        if v[d]:
            d += 1
            continue
        if c[d] == []:
            d += 1
            continue
        r = []
        for i,j in c[d]:
            if j in s:
                continue
            h = []
            for idx, k in enumerate(i):
                if v[d+idx] == False and k == '1':
                    h.append(-idx)
            r.append((h, j))
        if r == []:
            d += 1
            continue
        m, num = max(r)
        
        print(num, end=' ')
        s.append(num)
        q[num] -= 1
        z = len(m)
        for j in m:
            v[d-j] = True
        d += 1
    for i in q:
        for j in range(q[i]):
            print(i, end=' ')
    print()
        
for _ in range(int(input())):
    solve()

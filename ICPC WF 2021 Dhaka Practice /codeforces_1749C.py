def t(a, k):
    for i in range(1, k+1):
        r = k-i+1
        m = -1
        for j in a:
            if j > r:
                continue
            m = max(m, j)
        if m == -1:
            return 0
        a.remove(m)
        #print(i,r,m,a)
        if a == []:
            return True
        idx = a.index(min(a))
        a[idx] += r
    return True

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    
    for k in range(n, 0, -1):
        x = [i for i in a]
        z = t(x, k)
        
        if z:
            print(k)
            break
    else:
        print(0)

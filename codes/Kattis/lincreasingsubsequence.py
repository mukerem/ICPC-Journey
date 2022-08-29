while True:
    n = raw_input()
    if n == '0':
        break
    x = [int(i) for i in n.split()]
    n = x[0]
    arr = x[1:]
    lcs = [0 for i in range(n)]
    for i in range(n):
        lcs[i] = 1
        for k in range(i):
            if arr[k] < arr[i]:
                lcs[i] = max(lcs[i], lcs[k] + 1)
    ans = []
   
    t = []
    maxx = max(lcs)
    k = maxx
    for i in range(n):
        if lcs[i] == k:
            t.append(arr[i])
    for i in t:
        xx = i
        abc = [xx]
        k = maxx
        for j in range(n-1 ,-1 ,-1):
            if arr[j] < xx and k == lcs[j] + 1:
                xx = arr[j]
                abc.append(xx)
                k -= 1
                xx
        ans.append(abc[::-1])
    ans.sort()
    print maxx,
    for i in ans[0]:
        print i,
    print 
    
    

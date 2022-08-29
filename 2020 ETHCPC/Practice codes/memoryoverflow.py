t = input()
for _ in range(t):
    n, k, x = raw_input().split()
    n = int(n)
    k = int(k)
    x = list(x)
    ans = list()
    for i in range(n):
        y = x[i+1:]
        if x[i] in y:
            ind = y.index(x[i])
            if ind < k:
                ans.append(x[i])
    print ("Case %d: %d" % (_+1, len(ans)))

for i in range(input()):
    n = input()
    x = {}
    user = []
    for j in range(n):
        y = set([int(k) for k in raw_input().split()[1:]])
        user.append(y)
        for k in y:
            if k in x:
                x[k]  = False
            else:
                x[k] = True
                
    ans = []
    for k in user:
        t =0
        for v in k:
            if x[v]:
                t += 1
        ans.append(t)
    total = sum(ans)
    print 'Case ' + str(i+1) + ':',
    

    for k in ans:
        if total == 0:
            print '0.000000%',
            continue
        print ('%.6f%s' % (round(100.0 * k/total, 6), '%')),
    print

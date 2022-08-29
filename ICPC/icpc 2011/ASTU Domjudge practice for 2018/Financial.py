from __future__ import print_function
t = input()
for r in range(t):
    ans = []
    n,limit = raw_input().split()
    n = int(n); limit = int(limit)
    bank = [[] for i in range(n)]
    borrow = [[] for i in range(n)]
    balance = []
    total = [0 for i in range(n)]
    visit= [False for i in range(n)]
    c = 0
    
    for i in range(n):
        m = raw_input().split()
        balance.append(int(m[0]))
        for j in range(2, len(m),2):
            bank[i].append([int(m[j]), float(m[j+1])])
            borrow[int(m[j])].append([i,float(m[j+1])])
        #print balance,bank
        lend = len(bank[i])
        summ = 0
        for j in range(lend):
            summ += bank[i][j][1]
        total[i] =summ+balance[i]
    
        #print total
    minn = min(total)
    m = total.index(minn)
    for i in range(n):
        if total[i]<limit:
            ans.append(i)
        
    print ('Case # '+str(r+1)+':',end='')
    while c<n and minn<limit:
        #print (m,end=' ')
        minus = borrow[m]
        minus.sort()
        for x,y in minus:
            if visit[x]:
                continue
            #print x,y
            total[x] -= y
            if total[x]<limit and (not x in ans):
                #print ("@")
                ans.insert(ans.index(m)+1, x) 
        total[m] = float('inf')
        visit[m] = 1
        c += 1
        minn = min(total)
        m = total.index(minn)
    for i in ans:
        print (i,end=' ')
    print()
            
            
        
        
        
    
    

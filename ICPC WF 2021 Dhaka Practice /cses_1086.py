def repeatition(n):
    #n -= 1
    k = [1]
    t = 0
    r = 10
    num = [(0, 1, 1)]
    for i in range(1, 20):
        s = 9 * sum(k) + r
        t = num[-1][-1]
        num.append((t + 1, r, t + s))
        k.append(s)
        r *= 10
    #for i in num[:7]:
    #   print(*i)
    #n = int(input())
    idx = 19
    while n < num[idx][-1]:
        #print(num[idx][-1], n)
        idx -= 1
    #idx -= 1
    #print('*'*20, idx)
    ans = []
    while idx >= 0:
        #print(idx, n, ans)
        a,b,c =  num[idx]
        
        if n < a:
            ans.append(0)
            idx -= 1
            continue
        '''
        if n == 1:
            for i in range(idx):ans.append(0)
            if not ans or ans and ans[-1] != 1:
                ans.append(1)
            else:
                ans.append(0)
            
            break
        '''
        '''
        if n == 2:
            for i in range(idx-1):ans.append(0)
            ans.append(1)
            ans.append(0)
            break
        '''
        #n-=a
        
        if n <= (b+a-1):
            ans.append(1)
            
            #n -= 1
        else:
            k = 2
            n -= b
            #n -= a
            while n > a:
                n -= a
                k += 1
            ans.append(k)
        idx -= 1
    #print(n)
    return ans
#print(302, repeatition(302))
for i in range(1, 20):
    print(i, repeatition(i))
'''
0 1 1
2 10 20
21 100 300
301 1000 4000
4001 10000 50000
50001 100000 600000
600001 1000000 7000000
'''
n = int(input())
a = repeatition(n)
print(''.join(list(map(str, a))))


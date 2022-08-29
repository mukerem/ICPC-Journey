t = input()
for i in range(t):
    a = [i for i in raw_input().split()]
    b = int(a[0])
    a.pop(0)
    c = [(k+(k[-1]*(6-len(k))),k) for k in a]
    c.sort(reverse=True)
    x = ''
    for k in range(b):
        d = k-1
        while d>=0:
            if c[d][1] in c[k][1] or c[k][1] in c[d][1]:
                if c[d][1]+c[k][1] < c[k][1]+c[d][1]:
                    c[d],c[k]=c[k],c[d]
                
                    
            else:
                break
            d -= 1
        
    #print c
    for z,y in c:
        x += y
    print x
    

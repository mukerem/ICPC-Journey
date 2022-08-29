
while 1:
    x  = []
    c = False
    d = {}
    e = {}
    l = None
    ls = set()
    while 1:
        
        b = raw_input()
        if b == '0':
            c = True
            break
        if b == '1':
            d[l] = list(ls)
            l = b
            for i in ls:
                if i in e:
                    e[i] = False
                else:
                    e[i] = True

            ls = set()
            break
        if b.upper() == b:
            if l:
                d[l] = list(ls)
            l = b
            for i in ls:
                if i in e:
                    e[i] = False
                else:
                    e[i] = True

            ls = set()
        else:
            ls.add(b)
    


    if c:
        break
    ans = []
    for i in d:
        g = 0
        j = d[i]
        for k in j:
            if e[k]:
                g += 1
        ans.append((-g, i))
            
    ans.sort()
    for i,j in ans:
        print j,-i
    
    

case = 1
while 1:
    try:
        a = input()
        x =[int(i) for i in raw_input().split()]
        y = []
        k = []
        for i in x:
            if i == 0:
                if k:
                    y.append(k)
                    k = []
            else:
                k.append(i)
        if k:
            y.append(k)
        ans = 0
        for i in y:
            if len(i) == 1 and i[0] < 0:
                continue
            c = 0
            t = 1
            for j in i:
                t *= j
                if j<0:
                    c += 1
            if c%2 == 0:
                ans = max(ans, t)
            else:
                d = 1
                for j in i:
                    if j <0:
                        d *= j
                        break
                    d *= j
                e = 1
                for j in i[::-1]:
                    if j <0:
                        e *= j
                        break
                    e *= j
                t = t // max(d, e)
                ans = max(ans, t)
        
        print ("Case #%d: The maximum product is %d.\n" % (case, ans))
        case += 1
        raw_input()
    except EOFError:
        break

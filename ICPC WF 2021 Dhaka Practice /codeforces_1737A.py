for _ in range(int(input())):
    n, k = map(int, input().split())
    s = input()
    s = list(s)
    s.sort()
    u = ''
    m = {}
    for i in s:
        if i in m:
            m[i] += 1
        else:
            m[i] = 1
    q = []
    for i in m:
        q.append([i, m[i]])
    m = q
    m.sort()
    for i in range(k):
        q = 0
        d = []
        d.append(m[0][0])
        m[0][1] -= 1
        if m[0][1] == 0:
            m.pop(0)
        q = 1
        z = False
        y = len(m)
        while len(d) < n//k:
            q = q % len(m)
            d.append(m[q][0])
            if len(d) == y:
                z = True
            m[q][1] -= 1
            if m[q][1] == 0:
                m.pop(q)
            else:
                if z == False:
                    q += 1
                else:
                    idx = -1
                    maxx = -1
                    zz = 0
                    for ii, jj in m:
                        if jj >= maxx:
                            maxx = jj
                            idx = zz
                        zz += 1
                    q = idx
        d = list(set(d))
        d.sort()
        for i,v in enumerate(d):
            if i != ord(v)-97:
                u += chr(i+97)
                break
        else:
            u += chr(len(d)+97)
            
    print(u)

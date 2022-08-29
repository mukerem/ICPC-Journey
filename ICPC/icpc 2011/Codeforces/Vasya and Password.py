t = input()
for k in range(t):
    p = raw_input()
    s = list(p)
    a = 0
    c = 0
    ia = -1
    for i in s:
        if i>='0' and i <= '9':
            a += 1
            ia = c
        if a == 2:
            break
        c += 1
    b = 0
    c = 0
    ib = -1
    for i in s:
        if i>='A' and i <= 'Z':
            b += 1
            ib = c
        if b == 2:
            break
        c += 1
    d = 0
    c = 0
    id  = -1
    for i in s:
        if i>='a' and i <= 'z':
            d += 1
            id = c
        if d == 2:
            break
        c += 1
    if a and b and d:
        pass
    elif a and b:
        for i in range(len(s)):
            if i == ia or i == ib:
                continue
            else:
                s[i] = 'a'
                break
    
    elif a and d:
        for i in range(len(s)):
            if i == ia or i == id:
                continue
            else:
                s[i] = 'A'
                break
    
    elif d and b:
        for i in range(len(s)):
            if i == id or i == ib:
                continue
            else:
                s[i] = '5'
                break
    elif a:
        s[0:2] = 'Aa'
    elif b:
        s[0:2] = '5a'
    else:
        s[0:2] = 'A5'

    m = ''
    for i in s:
        m += i
    print m

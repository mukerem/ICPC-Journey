for _ in range(input()):
    
    a = list(raw_input())
    b = list(raw_input())

    x10 = []
    x01 = []
    total = 0
    l = len(a)
    if len(a ) != len(b):
        print ("Case %d: %d" % (_ + 1, -1))
        continue
    for i in range(l):
        if a[i] == '1' and b[i] == '0':
            x10.append(i)
        elif a[i] == '0' and b[i] == '1':
            x01.append(i)
    while x10 and x01:
        c = x10[-1]
        d = x01[-1]
        a[c], b[d] = a[d], b[c]
        x10.pop()
        x01.pop()
        total += 1
    if not x10:
        print("Case %d: %d" % (_ + 1, total + len(x01) + a.count('?')))
        continue
    for i in range(l):
        if a[i]
    for i in range(l):
        if a[i] == '?' and b[i] == '1':
            a[i] = '0'
            x01.append(i)
            total += 1
    while x10 and x01:
        c = x10[-1]
        d = x01[-1]
        a[c], b[d] = a[d], b[c]
        x10.pop()
        x01.pop()
        total += 1
    if not x10:
        print("Case %d: %d" % (_ + 1, total + len(x01) + a.count('?')))
        continue
    else:
        print ("Case %d: %d" % (_ + 1, -1))
    

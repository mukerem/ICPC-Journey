while 1:
    n = input()
    if n == 0:
        break
    x = []
    for i in range(n):
        c = raw_input().split()
        c.sort()
        x.append(' '.join(c))
    y = []
    for i in x:
        y.append((x.count(i), i))
    y.sort()
    
    tot = 0
    s = []
    for i in y[::-1]:
        if i[0] == y[-1][0] and not i[1] in s:
            tot += i[0]
            s.append(i[1])
        else:
            break
    print tot

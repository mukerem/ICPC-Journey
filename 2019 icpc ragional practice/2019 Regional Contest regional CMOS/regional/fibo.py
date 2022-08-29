u = input().strip()

while u != '-1':
    a, b, p = [int(i) for i in u.split()]

    if p == 2:
        c = 0
        if a % 3 == 0: c += 1
        if b % 3 == 0: c += 1
        diff = abs(a-b)
        if diff % 3 == 0 and diff != 0:
            c += 1
        else:
            c += b//a
        print(c)

    elif p == 3:
        c = 0
        if a % 4 == 0: c += 1
        if b % 4 == 0: c += 1
        diff = abs(a-b)
        if diff % 4 == 0 and diff != 0:
            c += 1
        else:
            c += b//a
        print(c)
        
    elif p == 5:
        c = 0
        if a % 5 == 0: c += 1
        if b % 5 == 0: c += 1
        diff = abs(a-b)
        if diff % 5 == 0 and diff != 0:
            c += 1
        else:
            c += b//a
        print(c)
        

    u = input().strip()

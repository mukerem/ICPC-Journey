
while 1:
    a,b,c,d = [int(i) for i in raw_input().split()]
    if a+b+c+d == 0:
        break
    y = 0
    while 1:
        if a==b and c == d and a==c:
            print y
            break
        z = a
        a = abs(a-b)
        b = abs(b-c)
        c = abs(c-d)
        d = abs(d-z)
        y += 1
                

# Time: 2022-08-25 17:50:38
# title: (More) Multiplication
# language: Python 3


while 1:
    x, y = map(int, input().split())
    z = x * y
    if z == 0:
        break
    x = str(x)
    y = str(y)
    z = str(z)
    a = []
    n = len(x)
    b = '+' + '----' * n + '---' + '+'
    a.append(list(b))
    b = '|   '
    for i in x:
        b += str(i) + '   '
    b += '|'
    a.append(list(b))
    b = '| ' + '+---' * n + '+ |'
    a.append(list(b))
    for j in range(len(y)):
        b = '|  /'
        c = '| / '
        d = '|/  '
        e = '+---'
        u = '| ' + b * n + '| |' 
        v = '| ' + c * n + '| |' 
        w = '| ' + d * n + '| |' 
        r = '| ' + e * n + '+ |'
        a.extend([list(u),list(v),list(w),list(r)])
    b = '|' + '/   ' * n + '   |'
    a.append(list(b))
    b = '+' + '----' * n + '---' + '+'
    a.append(list(b))
    
    for i, v in enumerate(y):
        a[4*i + 4][-2] = v
    

    for i in range(len(y)):
        for j in range(len(x)):
            k = int(x[j]) * int(y[i])
            u = str(k//10)
            v = str(k%10)
            a[4*i + 3][4*j + 3] = u
            a[4*i + 5][4*j + 5] = v

    u = z[-n:]
    v = z[:-n][::-1]
    for i, r in enumerate(u):
        a[-2][4*i + 3] = r
        
    for i, r in enumerate(v):
        a[-(4*i+4)][1] = r
        a[-(4*i+2)][1] = '/'
        
    if not v:
        a[-2][1] = ' ' 
    for i in a:
        print(''.join(i))

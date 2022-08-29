def check(s, i):
    if i<10:
        z = str(i)
    else:
        z = chr(87+i)
    for j in s:
        if j >= z:
            return False  
    else:
        return str(int(s, i))
for _ in range(int(input())):
    x,op,y, eq, z = input().split()
    s = ''
    for i in range(2, 37):
        a = check(x, i)
        if not a:
            continue
        b = check(y, i)
        if not b:
            continue
        c = check(z, i)
        if not c:
            continue

        if eval(a+op+b) == int(c):
            if i<10:s += str(i)
            elif i == 36: s += '0'
            else:s+=chr(87+i)
    if len(set(list(x))) == 1 and x[0] == '1':
        if len(set(list(y))) == 1 and y[0] == '1':
            if len(set(list(z))) == 1 and z[0] == '1':
                a = str(len(x))
                b = str(len(y))
                c = len(z)
                if eval(a+op+b) == c:s+='1'
    if s:
        print (s)
    else:
        print('invalid')
            
            

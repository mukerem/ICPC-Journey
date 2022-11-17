# Time: 2022-08-23 13:47:25
# title: Calories From Fat
# language: Python 3


def convert(a):
    b = []
    t = 0
    r = 0
    s = 0
    cal = [9,4,4,4,7]
    for idx, i in enumerate(a):
        if i[-1] == 'g':
            b.append(int(i[:-1])*cal[idx])
            t += b[-1]
        elif i[-1] == 'C':
            b.append(int(i[:-1]))
            t += b[-1]
        else:
            b.append(-int(i[:-1]))
            r += b[-1]
            s += 1
    r = abs(r)
    x = 100-r
    z = 100 * t / x
    #print(b,r,s,t,z)
    if b[0] >= 0:
        return b[0], z
    u = -b[0] * z / 100
    return u, z
    
    
            
            
while 1:
    try:
        a = []
        b = input()
        if b == '-':
            break
        a.append(b)
        while 1:
            b = input()
            if b == '-':
                break
            a.append(b)
        f = 0
        tot = 0
        for i in a:
            u, v = convert(i.split())
            f += u
            tot += v
            #print(u, v)
        p = f * 100 / tot
        print(f'{round(p)}%')
    except EOFError:
        break

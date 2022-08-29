t = input()
import sys
from math import ceil, floor
def round_up(n, decimals=0):
    multiplier = 10 ** decimals
    return ceil(n * multiplier) / float(multiplier)
for _ in range(t):
    x = raw_input()
    if not '.' in x:
        print x+'"'
        continue
    c,d = x.split('.')
    if d == '' or int(d ) == 0:
        print c+'"'
        continue
    if c == '':
        c = '0'
    s = []
    n = len(d)
    d = float('0.'+d)
    ok=False
    for i in range(1,8):
        h = 2 ** i
        for j in range(1, 128):
            u = float(str(float(j)/h)[:n+2])
            v = round_up(float(j) / h, n)
            if  u== d:
                if c != '0':
                    print c,
                print '%d/%d"' % (j, h)
                ok=True
                break
            if round(u,n) == d:
                if c != '0':
                    print c,
                print '%d/%d"' % (j, h)
                ok=True
                break
            if v == d:
                if c != '0':
                    print c,
                print '%d/%d"' % (j, h)
                ok=True
                break
        if ok:
            break
    if not ok:
        print c+'"'
            
        

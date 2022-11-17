# Time: 2022-08-24 09:20:33
# title: Simple Cron Spec
# language: Python 3


n = int(input())
a = []
b24 = [i for i in range(24)]
b60 = [i for i in range(60)]
h = {}
q = {}
for i in range(24):
    for j in range(60):
        h[(i, j)] = 0
        q[(i, j)] = False
        
def convert(s, t):
    b = []
    if s == '*':
        if t == 24: return b24
        return b60
    else:
        s = s.split(',')
        b = []
        for i in s:
            if '-' in i:
                x, y = i.split('-')
                for j in range(int(x), int(y) + 1):
                    b.append(j)
            else:
                b.append(int(i))
    return b
    
b = []
bc = set()
for  _ in range(n):
    s = input()
    x,y,z = s.split()
    x = convert(x, 24)
    y = convert(y, 60)
    if z == '*':
        #print(x, y)
        for i in x:
            for j in y:
                h[(i,j)] += 60
                q[(i, j)] = True
    else:
        z = convert(z, 60)
        for i in x:
            for j in y:
                for k in z:
                    b.append((i,j,k))
                    bc.add((i,j,k))
k = 0
m = 0
for i in h:
    if q[i]: k += 60
    m += h[i]
for i in bc:
    if q[i[:2]] == False:
        k += 1
print(k , len(b) + m)

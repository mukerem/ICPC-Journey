'''
n, t = map(int, input().split())
a = []
for i in range(n):
    a.append(tuple(map(int, input().split())))
b = []
for i in range(n-1):
    x = a[i][-1]
    y = a[i+1][-1]
    d = y-x
    if x%t == 0:
        b.append(a[i])
    if y%t == 0:
        b.append(a[i+1])
    if x//t != y//t:
        z = (x//t+1)*t
        x1 = a[i][0]
        x2 = a[i+1][0]
        y1 = a[i][1]
        y2 = a[i+1][1]
        u = (x2-x1)/d
        v = (y2-y1)/d
        # y-y1 = m(x-x1)
        while z < y:
            x3 = x1 + u*(z-x)
            y3 = y1 + v*(z-x)
            b.append((x3, y3, z))
            z += t
x = a[-1]
if x[-1]%t != 0:
    b.append(x)
    
b = sorted(b, key=lambda x: x[-1])
x = 0
for i in range(len(a)-1):
    x1 = a[i][0]
    x2 = a[i+1][0]
    y1 = a[i][1]
    y2 = a[i+1][1]
    d = (x2-x1)**2 + (y2-y1)**2
    d = d ** 0.5
    x += d
    
y = 0
for i in range(len(b)-1):
    x1 = b[i][0]
    x2 = b[i+1][0]
    y1 = b[i][1]
    y2 = b[i+1][1]
    d = (x2-x1)**2 + (y2-y1)**2
    d = d ** 0.5
    y += d
    
z = x-y
print(z*100/x)
'''
n = int(input())
a = []
m = {}
d = []
for i in range(n):
    x, y = [int(j) for j in input().split()]
    a.append((x, y))
    u = x*y
    v = x+y
    z = x-y
    if u in m:
        m[u].append((i, f'{x} * {y} = {u}'))
    else:
        m[u] = [(i, f'{x} * {y} = {u}')]
    
    if v in m:
        m[v].append((i, f'{x} + {y} = {v}'))
    else:
        m[v] = [(i, f'{x} + {y} = {v}')]
    
    if z in m:
        m[z].append((i, f'{x} - {y} = {z}'))
    else:
        m[z] = [(i, f'{x} - {y} = {z}')]
    d.append((u,v,z))
ans = []
for i,j,k in d:
    if len(m[i]) == 1:
        ans.append(m[i][0][1])
    elif len(m[j]) == 1:
        ans.append(m[j][0][1])
    elif len(m[k]) == 1:
        ans.append(m[k][0][1])
    else:
        print('impossible')
        break
else:
    for i in ans:
        print(i)
    

            

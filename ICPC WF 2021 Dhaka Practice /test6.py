'''n = int(input())
b = []
for i in range(n):
    x, y = map(float, input().split())
    b.append((x, y))
p = float(input())
q = int(input())
for _ in range(q):
    e, m = map(float, input().split())
    r = -1
    for i, j in b:
        if e+m <= i:
            r = j
            break
    else:
        r = p
    #print(r)
    a = m + e / (1 - r/100)
    print(a)
'''
'''
l, w = map(int, input().split())
if w < l or w > l*26:
    print('impossible')
else:
    a = [w//l for i in range(l)]
    for i in range(w%l):
        a[i] += 1
    s = ''
    for i in a:
        s += chr(96+i)
    print(s)
'''

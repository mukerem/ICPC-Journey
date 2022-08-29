n,k = [int(i) for i in raw_input().split()]
a = []
for i in range(n):
    a.append(input())

b = 0
c = a[:k]
e = 0
while 1:
    if c:  
        f = min(c)
        c.remove(f)
        e += f
        b += e
    else:
        break

    if k<n:
        c.append(a[k])
        k+= 1
print b

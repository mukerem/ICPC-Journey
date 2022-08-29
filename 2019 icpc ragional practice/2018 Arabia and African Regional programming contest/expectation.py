n = int(input())
'''
a = []
for i in range(n):
    x = [0 for _ in range(n)]
    a.append(x)
c = 0
for i in range(n):
    for j in range(n):
        for k in range(i, n):
            for m in range(j, n):
                #print('(%d,%d) -> (%d,%d)' % (i, j, k, m))
                c += 1
                for ii in range(i, k+1):
                    for jj in range(j, m+1):
                        a[ii][jj] += 1

for i in a:
    for j in i:
        print(j, end=' ')
    print()
print(c)
'''
b = []
for i in range(n):
    x = [0 for _ in range(n)]
    b.append(x)
c = 0
d = [n]
k = n - 2
for i in range(n//2 + n%2 - 1):
    d.append(d[-1] + k)
    k -= 2
d = d + d[::-1]
if n%2:
   d.pop(n//2)
#print(d, len(d))
for i in range(n):
    for j in range(n):
        b[i][j] = d[i] * d[j]

for i in b:
    for j in i:
        print(j, end=' ')
    print()

e = n
e += 1 - n%2
f = n//2 + n%2
c = e*f
c = c ** 2
print(c)

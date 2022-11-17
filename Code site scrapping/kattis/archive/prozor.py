# Time: 2022-08-15 19:59:24
# title: Prozor
# language: Python 3


r, c, z = map(int, input().split())
a = []
for i in range(r):
    a.append(list(input()))
m = -1
p,q = 0, 0
for i in range(r-z+1):
    for j in range(c-z+1):
        b = 0
        for k in range(1,z-1):
            for kk in range(1, z-1):
                if a[i+k][j+kk] == '*':
                    b += 1
        if b > m:
            m = b
            p, q = i, j
k = z
a[p][q] = '+'
a[p][q+k-1] = '+'
a[p+k-1][q] = '+'
a[p+k-1][q+k-1] = '+'
for k in range(1, z-1):
    a[p][q+k] = '-'
    a[p+z-1][q+k] = '-'
for k in range(1, z-1):
    a[p+k][q] = '|'
    a[p+k][q+z-1] = '|'
print(m)
for i in a:
    print(''.join(i))

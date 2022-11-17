# Time: 2022-08-19 09:25:32
# title: Okvir
# language: Python 3


n, m = map(int, input().split())
u,l,r,d = [int(i) for i in input().split()]
b = []
for i in range(n):
    b.append(input())

c = []
for i in range(u+d+n):
    p = m+l+r
    if i%2 == 0:
        k = '#.' * (p//2) + ('#' * (p%2))
    else:
         k = '.#' * (p//2) + ('.' * (p%2))
    c.append(list(k))
for i in range(n):
    c[u+i][l: l+m] = list(b[i])
for i in c:
    print(''.join(i))

# Time: 2022-08-19 11:27:05
# title: Misa
# language: Python 3


r, s = map(int, input().split())
a = []
for i in range(r):
    a.append(list(input()))
m = 0
d = {'o': 1, '.': 0}

def shake(x, y):
    b = []
    for i in a:
        b.append(i[:])
            
    b[x][y] = 'o'
    c = 0
    for i in range(r):
        for j in range(s):
            if b[i][j] == '.':
                continue
            if j>0:c += d[b[i][j-1]]
            if j<s-1:c += d[b[i][j+1]]
            if i>0:c += d[b[i-1][j]]
            if i<r-1:c += d[b[i+1][j]]
            if j>0 and i>0:c += d[b[i-1][j-1]]
            if j>0 and i<r-1:c += d[b[i+1][j-1]]
            if j<s-1 and i>0:c += d[b[i-1][j+1]]
            if j<s-1 and i<r-1:c += d[b[i+1][j+1]]
    return c//2
k = 0
for i in range(r):
    for j in range(s):
        if a[i][j] == '.':
            m = max(m, shake(i, j))
            k = 1
if k == 0:
    m = shake(0,0)
print(m)

n, m = map(int, input().split())
a = [[0 for i in range(102)] for j in range(102)]

for i in range(n):
    x, y = map(int, input().split())
    a[x][y] += 1
b = [[0 for i in range(102)] for j in range(102)]
x = 0
y = 0
for i in range(101):
    x += a[i][0]
    y += a[0][i]
    b[i][0] = x
    b[0][i] = y
    
for i in range(1, 101):
    for j in range(1, 101):
        b[i][j] = a[i][j] + b[i-1][j] + b[i][j-1] - b[i-1][j-1]
    
for i in range(m):
    x1,y1,x2,y2 = map(int, input().split())
    u = b[x2][y2] - b[x2][y1-1] - b[x1-1][y2] + b[x1-1][y1-1]
    print(u)

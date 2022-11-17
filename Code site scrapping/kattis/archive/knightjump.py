# Time: 2022-08-27 12:35:29
# title: Knight Jump
# language: Python 3


n = int(input())

M = 10000000
a = [[M for i in range(n)]for j in range(n)]


z = [
    (2, 1),
    (2, -1),
    (-2, 1),
    (-2, -1),
    (1, 2),
    (1, -2),
    (-1, 2),
    (-1, -2)
    ]
board = []
x = -1
y = -1
for i in range(n):
    board.append(list(input()))
    if 'K' in board[-1]:
        x = i
        y = board[-1].index('K')
a[x][y] = 0
ax = x
ay = y
stack = [(x, y)]
d = 1
while d:
    x, y = stack.pop()
    d -= 1
    for i, j in z:
        if 0 <= i + x < n and 0 <= j + y < n and board[i+x][j+y] != '#':
            if i + x > ax + 5 or j+y > ay + 5:
                continue
            if a[x+i][y+j] > a[x][y] + 1:
                a[x+i][y+j] = a[x][y] + 1
                stack.append((x+i, y+j))
                d += 1
if a[0][0] == M:
    print(-1)
else:
    print(a[0][0])

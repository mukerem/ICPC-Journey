# Time: 2022-08-19 09:51:50
# title: N-Puzzle
# language: Python 3


a = []
for i in range(4):
    a.append(input())
s = 0
for i in range(4):
    for j in range(4):
        c = a[i][j]
        if c == '.':
            continue
        x = ord(c) - 65
        y = x%4
        z = x // 4
        s += abs(z - i) + abs(y - j)
print(s)
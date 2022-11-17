# Time: 2022-08-26 14:46:50
# title: Hiding Places
# language: Python 3


M = 10000000000000
a = [[M for i in range(8)]for j in range(8)]


def chess(x,y):
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
    d = []
    for i, j in z:
        if 0 <= i + x < 8 and 0 <= j + y < 8:
            if a[x+i][y+j] >= a[x][y] + 1:
                a[x+i][y+j] = a[x][y] + 1
                d.append((x+i, y+j))
                
    for r,s in d:
        chess(r, s)
    

for _ in range(int(input())):
    a = [[M for i in range(8)]for j in range(8)]
    x, y = list(input())
    x = ord(x) - 96
    y = int(y)
    x -= 1
    y -= 1
    a[x][y] = 0
    
    chess(x,y)
    m = 0
    for i in a:
        m = max(m, max(i))
    d = []
    for i in range(8):
        for j in range(8):
            if a[i][j] == m:
                d.append(str(chr(97+i)) + str(j+1))
    d = sorted(d, key=lambda x: (-int(x[1]), x[0]))
    print(m)
    print(' '.join(d))
    

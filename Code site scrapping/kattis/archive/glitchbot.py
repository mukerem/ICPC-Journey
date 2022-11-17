# Time: 2022-08-18 15:18:46
# title: GlitchBot
# language: Python 3


x0, y0 = map(int, input().split())
n = int(input())
c = ['Forward', 'Right', 'Left']
a  = []
for i in range(n):
    a.append(input())
    
def move(b):
    x = 0
    y = 0
    d = 0
    m = [(0, 1), (-1, 0), (0, -1), (1, 0)]
    for i in b:
        if i == 'Forward':
            r,s = m[d]
            x += r
            y +=s
        elif i == 'Right':
            d = (d-1) % 4
        else:
            d = (d+1) % 4
    if x == x0 and y == y0:
        return 1
def find():
    for i in range(n):
        for j in c:
            if a[i] == j:
                continue
            z = a[:]
            z[i] = j
            if move(z) == 1:
                print(i+1, j)
                return
    
find()

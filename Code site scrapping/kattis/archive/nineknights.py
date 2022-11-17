# Time: 2022-08-18 11:34:51
# title: Nine Knights
# language: Python 3


a = []
for i in range(5):
    a.append(input())

def is_valid():
    
    v = [
        (1, 2),
        (1, -2),
        (-1, 2),
        (-1, -2),
        (2, 1),
        (2, -1),
        (-2, 1),
        (-2, -1),
        ]
    f = 0
    for x in range(5):
        for y in range(5):
            if not a[x][y] == 'k':
                continue
            f += 1
            for i, j in v:
                c = x+i
                d = y+j
                if 0<=c<5 and 0<=d<5:
                    if a[c][d] == 'k':
                        return 'invalid'
    if f != 9:
        return 'invalid'
    return 'valid'

print(is_valid())

# Time: 2022-08-13 10:42:56
# title: Bela
# language: Python 3


d = {
    'A': [11, 11],
    'K': (4, 4),
    'Q': (3, 3),
    'J': (20, 2),
    'T': (10, 10),
    '9': (14, 0),
    '8': (0, 0),
    '7': (0, 0),
}

n, s = input().split()
n = int(n)
a = 0
for i in range(4*n):
    b = input()
    c,f = b[0], b[1]
    if f == s:
        a += d[c][0]
    else:
        a += d[c][1]
print(a)
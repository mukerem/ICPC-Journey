# Time: 2022-08-24 09:29:28
# title: Sideways Sorting
# language: Python 3


while 1:
    r,c = map(int, input().split())
    if r+c == 0:
        break
    a = []
    for i in range(r):
        a.append(input())
    b = []
    for i in range(c):
        s = ''
        for j in range(r):
            s += a[j][i]
        b.append(s)
    b = sorted(b, key=str.casefold)

    for i in range(r):
        s = ''
        for j in range(c):
            s += b[j][i]
        print(s)
    print()

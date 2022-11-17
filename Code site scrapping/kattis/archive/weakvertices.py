# Time: 2022-08-13 12:31:45
# title: Weak Vertices
# language: Python 3


while 1:
    n = int(input())
    if n == -1:
        break
    a = []
    for i in range(n):
        b = list(map(int, input().split()))
        a.append(b)
    
    for i in range(n):
        k = []
        for j in range(n):
            if a[i][j] == 1:
                k.append(j)
        m = len(k)
        c = False
        for u in k:
            for v in k:
                if a[u][v] == 1:
                    c = True
                    break
            if c:
                break
        if not c:
            print(i, end= ' ')
    print()
            
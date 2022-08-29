while True:
    try:
        x = input()
        n = len(x)
        s = []
        for i in range(2, 1450):
            for j in range(2,18):
                if pow(i, j) == n:
                    s.append((i,j))
        s.reverse()
        for i in s:
            u = s[:i]
            for j in range(0, n, i):
                if 
    except EOFError:
        break

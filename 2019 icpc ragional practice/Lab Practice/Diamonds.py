t = input()
for _ in range(t):
    x = []
    n = input()
    for j in range(n):
        w,c = [float(i) for i in raw_input().split()]
        x.append((w,c))
    length = [0 for i in range(n)]
    for i in range(n):
        length[i]=1
        for k in range(i):
            if x[i][1] < x[k][1] and x[i][0] > x[k][0]:
                length[i] = max(length[i] , length[k] + 1)
    print max(length)

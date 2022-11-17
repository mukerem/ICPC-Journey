for _ in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    a.reverse()
    d = 0
    m = a[0]
    for i in range(1, n):
        if a[i] < m:
            d += 1
        m = max(m, a[i])
    print(d)

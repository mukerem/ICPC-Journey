for _ in range(int(input())):
    n,m = [int(i) for i in input().split()]
    x = 1
    m -= 1
    for i in range(n, n-m, -1):
        x *= i
    for i in range(1, m+1):
        x //= i
    print(x)

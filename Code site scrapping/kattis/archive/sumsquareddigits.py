# Time: 2022-08-13 23:20:35
# title: Sum Squared Digits Function
# language: Python 3


for _ in range(int(input())):
    p, b, n = map(int, input().split())
    a = []
    while n:
        r = n%b
        a.append(r)
        n = n // b
    ans = 0
    for i in a:
        ans += i*i
    print(p, ans)
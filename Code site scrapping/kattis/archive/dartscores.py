# Time: 2022-08-26 10:11:20
# title: Darts
# language: Python 3


r = [20, 40, 60, 80, 100, 120, 140, 160, 180, 200]
for _ in range(int(input())):
    n = int(input())
    a = 0
    for i in range(n):
        x, y = map(int, input().split())
        d = x ** 2 + y ** 2
        d = d ** 0.5
        for idx, k in enumerate(r):
            if d <= k:
                a += (11- idx - 1)
                break
    print(a)

# Time: 2022-08-13 12:45:00
# title: Stand on Zanzibar
# language: Python 3


for _ in range(int(input())):
    a = list(map(int, input().split()))
    b = 0
    for i in range(1, len(a)-1):
        c = a[i] - 2*a[i-1]
        b += max(c, 0)
    print(b)
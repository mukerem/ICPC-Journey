# Time: 2022-08-16 15:21:16
# title: A Rational Sequence (Take 3)
# language: Python 3


for _ in range(int(input())):
    a, n = map(int, input().split())
    n = bin(n)[3:]
    p = 1
    q = 1
    for i in n:
        if i == '0':
            q += p
        else:
            p += q
    print(f'{a} {p}/{q}')
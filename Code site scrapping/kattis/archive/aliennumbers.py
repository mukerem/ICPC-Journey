# Time: 2022-08-18 21:47:39
# title: Alien Numbers
# language: Python 3


for _ in range(int(input())):
    a,b,c = input().split()
    n = len(b)
    t = 0
    a = a[::-1]
    for i in range(len(a)):
        t += b.index(a[i]) * (n ** i)
    s = ''
    n = len(c)
    while t > 0:
        r = t%n
        t //= n
        s += c[r]
    s = s[::-1]
    print(f'Case #{_+1}: {s}')
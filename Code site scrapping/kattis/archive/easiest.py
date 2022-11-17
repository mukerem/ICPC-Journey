# Time: 2022-08-14 14:13:41
# title: The Easiest Problem Is This One
# language: Python 3


while 1:
    n = int(input())
    if n == 0:
        break
    p = 11
    d = sum([int(i) for i in str(n)])
    while 1:
        k = n * p
        e = sum([int(i) for i in str(k)])
        if d == e:
            print(p)
            break
        p += 1
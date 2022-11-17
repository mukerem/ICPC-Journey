# Time: 2022-08-17 21:43:18
# title: Un-bear-able Zoo
# language: Python 3


k =  1
while 1:
    n = int(input())
    if n == 0:
        break
    a = {}
    for i in range(n):
        b = input().split()[-1].lower()
        if b in a:
            a[b] += 1
        else:
            a[b] = 1
    c = list(a.items())
    c.sort()
    print(f'List {k}:')
    for i, j in c:
        print(f'{i} | {j}')
    k+= 1
    
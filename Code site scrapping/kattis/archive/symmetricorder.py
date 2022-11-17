# Time: 2022-08-14 14:42:02
# title: Symmetric Order
# language: Python 3


s = 1
while 1:
    n = int(input())
    if n == 0:
        break
    a = []
    for i in range(n):
        b = input()
        a.append((len(b), i,  b))
    a.sort()
    print(f'SET {s}')
    for i in range(0, n, 2):
        print(a[i][-1])
    for i in range(n -1 - n%2, 0, -2):
        print(a[i][-1])
    s += 1

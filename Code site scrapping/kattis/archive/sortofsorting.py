# Time: 2022-08-17 22:23:48
# title: Sort of Sorting
# language: Python 3


while 1:
    n = int(input())
    if n == 0:
        break
    a = []
    for i in range(n):
        b = input()
        a.append((b[:2], i, b))
    a.sort()
    for i,j,k in a:
        print(k)
    print()
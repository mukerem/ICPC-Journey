# Time: 2022-08-17 19:46:11
# title: Bacon, Eggs, and Spam
# language: Python 3


while 1:
    n = int(input())
    if n == 0:
        break
    a = {}
    for i in range(n):
        s = input().split()
        name = s[0]
        menu = s[1:]
        for m in menu:
            if m in a:
                a[m].append(name)
            else:
                a[m] = [name]
    b = list(a.items())
    b.sort()
    for x, y in b:
        y.sort()
        print(x, ' '.join(y))
    print()
# Time: 2022-08-17 22:29:38
# title: Above Average
# language: Python 3


for _ in range(int(input())):
    a = list(map(int, input().split()))
    b = a[0]
    a = a[1:]
    av = sum(a) / len(a)
    c = 0
    for i in a:
        if i > av:
            c+=1
    print('%.3f%s' % (c * 100 / b, '%'))

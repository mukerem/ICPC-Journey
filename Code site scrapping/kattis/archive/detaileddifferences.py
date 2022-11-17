# Time: 2022-08-13 21:24:47
# title: Detailed Differences
# language: Python 3


for _ in range(int(input())):
    a = input()
    b = input()
    print(a)
    print(b)
    s = ''
    for i in range(len(a)):
        if a[i] == b[i]:
            s += '.'
        else:
            s += '*'
    print(s)
    print()
# Time: 2022-08-19 13:58:55
# title: Babylonian Numbers
# language: Python 3


for _ in range(int(input())):
    s = input().split(',')[::-1]
    a = 0
    k = 0
    for i in s:
        if i == '':
            i = 0
        a += int(i) * (60 ** k)
        k += 1
    print(a)
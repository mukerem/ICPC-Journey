# Time: 2022-08-14 17:22:22
# title: Mjehuric
# language: Python 3


a = list(map(int, input().split()))
while 1:
    if a == sorted(a):
        break
    for i in range(4):
        if a[i] > a[i+1]:
            a[i], a[i+1] = a[i+1], a[i]
            print(*a)
        
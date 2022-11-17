# Time: 2022-08-19 13:55:08
# title: Jumbled Communication
# language: Python 3


n = int(input())
a = list(map(int, input().split()))
for k in a:
    for i in range(0, 256):
        b = i ^ ((i << 1) % 256)
        if b == k:
            print(i, end=' ')
            break

# Time: 2022-08-16 16:34:03
# title: Server
# language: Python 3


n, t = map(int, input().split())
a = [int(i) for i in input().split()]
b = 0
for i in range(n):
    if b + a[i] > t:
        print(i)
        break
    b = b + a[i]
else:
    print(n)
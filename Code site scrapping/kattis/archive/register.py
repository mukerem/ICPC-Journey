# Time: 2022-08-19 00:25:10
# title: Primary Register
# language: Python 3


a = list(map(int, input().split()))
b = [2, 3, 5, 7, 11, 13, 17, 19]
t = 1
c = 0
for i in range(8):
    c += a[i] * t
    t *= b[i]
print(9699689 - c)

# Time: 2022-08-23 22:19:42
# title: Euler's Number
# language: Python 3


n = int(input())
k = 1
a = 1
for i in range(1, n+1):
    a = a * i
    k += 1 / a
print(k)
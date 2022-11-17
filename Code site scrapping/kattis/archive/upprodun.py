# Time: 2022-08-14 12:15:59
# title: Arrangement
# language: Python 3


n = int(input())
m = int(input())
a = [m//n] * n
for i in range(m%n):
    a[i] += 1
for i in a:
    print('*' * i)
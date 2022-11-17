# Time: 2022-08-13 12:16:06
# title: Odd Echo
# language: Python 3


n = int(input())
a = []
for i in range(n):
    a.append(input())
for i in range(0, n, 2):
    print(a[i])
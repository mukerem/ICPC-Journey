# Time: 2022-08-23 19:24:54
# title: Tram
# language: Python 3


a = 0
n = int(input())
for i in range(n):
    x, y = map(int, input().split())
    a += (y-x)
print(a/n)
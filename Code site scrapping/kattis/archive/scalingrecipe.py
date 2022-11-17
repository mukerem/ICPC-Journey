# Time: 2022-08-15 16:48:00
# title: Scaling Recipe
# language: Python 3


n, x, y = map(int, input().split())
for i in range(n):
    b = int(input())
    c = y * b // x
    print(c)
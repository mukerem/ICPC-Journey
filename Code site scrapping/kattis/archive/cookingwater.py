# Time: 2022-08-17 19:35:28
# title: Cooking Water
# language: Python 3


n = int(input())
a = -1
b = 100000
for i in range(n):
    x, y = map(int, input().split())
    a = max(a, x)
    b = min(b, y)
if a <= b:
    print("gunilla has a point")
else:
    print("edward is right")    
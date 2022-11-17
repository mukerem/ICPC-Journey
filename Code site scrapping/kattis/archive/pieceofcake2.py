# Time: 2022-08-13 20:25:09
# title: Piece of Cake!
# language: Python 3


n, h, v = map(int, input().split())
a = max(h, n-h)
b = max(v, n-v)
print(a*b*4)

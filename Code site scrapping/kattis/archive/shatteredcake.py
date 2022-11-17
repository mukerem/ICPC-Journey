# Time: 2022-08-13 20:03:58
# title: Shattered Cake
# language: Python 3


w = int(input())
n = int(input())
c = 0
for i in range(n):
    a,b = map(int, input().split())
    c += a*b
print(c // w)
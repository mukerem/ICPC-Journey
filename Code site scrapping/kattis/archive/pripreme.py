# Time: 2022-08-23 22:17:34
# title: Pripreme
# language: Python 3


n = int(input())
a = [int(i) for i in input().split()]
b = sum(a)
m = max(a)
print(max(b, 2*m))
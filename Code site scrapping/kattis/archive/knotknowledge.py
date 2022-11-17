# Time: 2022-08-13 20:43:28
# title: Knot Knowledge
# language: Python 3


n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
for i in b:
    a.remove(i)
print(*a)
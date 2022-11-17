# Time: 2022-08-15 16:57:16
# title: Planting Trees
# language: Python 3


n = int(input())
a = [int(i) for i in input().split()]
a.sort(reverse=True)
for i in range(n):
    a[i] += i+2
print(max(a))
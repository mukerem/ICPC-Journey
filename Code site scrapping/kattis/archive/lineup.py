# Time: 2022-08-15 20:16:02
# title: Line Them Up
# language: Python 3


n = int(input())
a = []
for i in range(n):
    a.append(input())
if a == sorted(a):
    print('INCREASING')
elif a == sorted(a, reverse=True):
    print('DECREASING')
else:
    print('NEITHER')
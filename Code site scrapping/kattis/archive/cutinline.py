# Time: 2022-08-16 11:24:35
# title: Cut in Line
# language: Python 3


d = []
n = int(input())
for i in range(n):
    d.append(input())
c = int(input())
for i in range(c):
    a = input().split()
    if a[0] == 'leave':
        d.remove(a[-1])
    else:
        x = d.index(a[-1])
        d.insert(x, a[1])
for i in d:
    print(i)
    
# Time: 2022-08-17 22:16:27
# title: ABC
# language: Python 3


x = list(map(int, input().split()))
x.sort()
s = input()
k = list(s)
k.sort()
p = []
for i in s:
    f = k.index(i)
    p.append(x[f])
print(*p)
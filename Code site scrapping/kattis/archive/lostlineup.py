# Time: 2022-08-14 11:18:14
# title: Lost Lineup
# language: Python 3


n = input()
a = [int(i) for i in input().split()]
b = [(v, i+2) for i, v in enumerate(a)]
b.sort()
print(1, end=' ')
for v, i in b:
    print(i, end= ' ')
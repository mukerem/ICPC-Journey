# Time: 2022-08-25 23:16:42
# title: Music Your Way
# language: Python 3


s = input().split()
n = input()
n = int(n)
a = []
for i in range(n):
    a.append(input().split())
m = int(input())
for i in range(m):
    x = input()
    idx = s.index(x)
    a = sorted(a, key=lambda k: k[idx])
    print(' '.join(s))
    for j in a:
        print(' '.join(j))
    print()

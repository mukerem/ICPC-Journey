# Time: 2022-08-16 16:30:53
# title: Shopping List (Easy)
# language: Python 3


n, m = map(int, input().split())
a = {}
for i in range(n):
    b = input().split()
    for k in b:
        if k in a:
            a[k] += 1
        else:
            a[k] = 1
b = []
for i in a:
    if a[i] == n:
        b.append(i)
b.sort()
print(len(b))
for i in b:
    print(i)
# Time: 2022-08-23 20:08:29
# title: Tracking Shares
# language: Python 3


n  = int(input())
a = []
for i in range(n):
    k = int(input())
    for j in range(k):
        x, y = map(int, input().split())
        a.append((y, i, x))
a.sort()
b = {}
b[a[0][1]] = a[0][2]
for i in range(1, len(a)):
    if a[i][0] == a[i-1][0]:
        r = a[i][1]
        b[r] = a[i][2]
    else:
        t = 0
        for k in b:
            t += b[k]
        print(t , end= ' ')
        r = a[i][1]
        b[r] = a[i][2]
t = 0
for k in b:
    t += b[k]
print(t , end= ' ')

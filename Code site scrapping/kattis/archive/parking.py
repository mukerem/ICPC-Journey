# Time: 2022-08-25 22:53:40
# title: Parking
# language: Python 3


a = list(map(int, input().split()))
d = [0 for i in range(101)]
for i in range(3):
    x, y = map(int, input().split())
    for j in range(x, y):
        d[j] += 1
t = 0
for i in range(101):
    if d[i]:
        t += a[d[i]-1] * d[i]
print(t)

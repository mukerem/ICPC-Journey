n = int(input())
a = [0 for i in range(n)]
k = int(input())
v = []
for i in range(k):
    x, y = map(int, input().split())
    v.append((x-1, '+'))
    v.append((y, '-'))
v.sort()
d = 0
s = 0
for i, j in v:
    for k in range(s, i):
        a[k] = d
    if j == '+':
        d += 1
    else:
        d -= 1
    s = i
m = max(a)
for i in range(n):
    if m == a[i]:
        print(i+1)
        break

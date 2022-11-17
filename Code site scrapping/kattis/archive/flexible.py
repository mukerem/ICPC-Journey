# Time: 2022-08-17 12:37:26
# title: Flexible Spaces
# language: Python 3


w, p = map(int, input().split())
a = list(map(int, input().split()))
a.insert(0, 0)
b = [0]
for i in range(1, p+1):
    b.append(a[i] - a[i-1])
b.append(w-a[-1])
d = []
t = 0
for i in b:
    t += i
    d.append(t)
ans = []
for i in range(p+2):
    for j in range(i+1, p+2):
        ans.append(d[j] - d[i])
ans = list(set(ans))
ans.sort()
print(*ans)

# Time: 2022-08-16 11:55:06
# title: Best Relay Team
# language: Python 3


n = int(input())
a = []
for i in range(n):
    x = input().split()
    a.append((float(x[-1]), float(x[1]), x[0]))
a.sort()
b = a[:4]
best = 10000
x = sum([i[0] for i in b])
r = [k for i,j,k in b]

for i,j,k in b:
    y = j + x-i
    if y < best:
        r.remove(k)
        r.insert(0, k)
        best = y
    
ans = a[:3]
a = a[3:]
a = sorted(a, key=lambda x: x[1])
ans.insert(0, a[0])
t = ans[0][1] + sum([i[0] for i in ans[1:]])
if t< best:
    print(t)
    for i in ans:
        print(i[-1])
else:
    print(best)
    for i in r:
        print(i)

n = input()
a = []
for i in range(n):
    t = input()
    a.append(t)
a.sort()
a.reverse()
ans = 0
for i in range(2,n,3):
    ans += a[i]
print sum(a)-ans

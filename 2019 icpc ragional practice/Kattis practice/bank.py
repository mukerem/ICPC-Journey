n,t = [int(i) for i in input().split()]
s = []
for _ in range(n):
    x,y = [int(i) for i in input().split()]
    s.append((y,-x))
c = 0
ans = 0
for i,j in s:
    if c<=i:
        ans+=j
        c += 1
print(-ans)

n,k = [int(i) for i in input().split()]
city = {i:[] for i in range(1,n+1)}
a = [0 for i in range(n+1)]
for i in range(n-1):
    u,v = [int(kk) for kk in input().split()]
    city[u].append(v)
    city[v].append(u)

bb = [int(i) for i in input().split()]
for i in bb:
    a[i] = -3

for i in bb:
    x = []
    for j in city[i]:
        if(a[j] == -3):
            a[j]=2
        a[j]+=1
        x.append(j)
ans = 0
for i in a:
    if i>1:
        ans+=1
print(ans)
#print(a)
'''
ans = k
for i in city:
    if a[i]:
        continue
    b = city[i]
    c = 0
    for j in b:
        if a[j]:
            c += 1
        if c>1:
            ans += 1
            break
print(ans)
'''

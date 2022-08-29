n,k,r = [int(i) for i in input().split()]
x = set()
for i in range(k):
    x.add(int(input()))
ans = 0
for i in range(1,n+1,r):
    q = 0
    for j in range(i, i+r):
        if j in x:
            q += 1
        if q == 2:
            break
    else:
        ans += (2-q)

print(ans)
            

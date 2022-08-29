n, x= [int(i) for i in input().split()]
a = [int(i) for i in input().split()]

ans = 1
maxx = 1
for i in range(1,n):
    if a[i] - a[i-1] <= x:
        ans += 1
    else:
        if ans > 1:
            maxx = max(maxx, ans)
        ans = 1
if ans > 1:
    maxx = max(maxx, ans)
print(maxx)
    

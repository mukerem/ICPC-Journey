n, k = map(int, input().split())
a = list(map(int, input().split()))
ans = -1
x = 0

for i in range(n-1):
    x += 1
    if a[i] == a[i+1]:
        ans = max(ans, x)
        x = 0
ans = max(ans, x+1)
print(ans)
        

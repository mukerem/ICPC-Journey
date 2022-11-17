n, k = map(int, input().split())
a = list(map(int, input().split()))
d = k
for i in range(n):
    x = a[i]
    x += d
    d = x // 4
    x = x % 4
    print(x, end= ' ')
        
while d:
    print(d%4, end = ' ')
    d = d//4

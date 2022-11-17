n, x = map(int, input().split())
a = [0] * (x+1)
k = list(map(int, input().split()))
for b in k:
    a[b] += 1
for i in range(1, x):
    c = a[i]
    if c % (i+1) != 0:
        print('NO')
        break
    d = c // (i+1)
    a[i+1] += d
else:
    print('YES')

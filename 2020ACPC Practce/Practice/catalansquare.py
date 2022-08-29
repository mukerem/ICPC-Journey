a = [1] * 5001
for i in range(1,5001):
    t = 1
    for j in range(i+1, 2*i+1):
        t *= j
    for j in range(2, i+1):
        t //= j
    t //= (i+1)
    a[i] = t
print(a[20])
n = int(input())
x = 0
for i in range(n+1):
    x += a[i]*a[n-i]
print(x)

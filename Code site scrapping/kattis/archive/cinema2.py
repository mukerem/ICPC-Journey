# Time: 2022-08-17 18:57:58
# title: Cinema Crowds 2
# language: Python 3


n, m = map(int, input().split())
a = [int(i) for i in input().split()]
t = 0
k = m
for i in range(m):
    if t + a[i] > n:
        break
    t += a[i]
    k -= 1
print(k)
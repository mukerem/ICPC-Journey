# Time: 2022-08-16 16:13:04
# title: Sjecista
# language: Python 3


n = int(input())
ans = 1
for i in range(n, n-4, -1):
    ans *= i
ans //= 24
print(ans)
# Time: 2022-08-16 15:35:12
# title: The Plank
# language: Python 3


dp = [0, 1, 2, 4] + [None] * 21
n = int(input())

for i in range(4, n+1):
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3]
print(dp[n])
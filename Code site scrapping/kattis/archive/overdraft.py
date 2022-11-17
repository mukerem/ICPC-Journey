# Time: 2022-08-15 17:04:36
# title: Overdraft
# language: Python 3


n = int(input())
ans = 0
t = 0
for i in range(n):
    b = int(input())
    t += b
    if(t<0):
        ans = max(ans, abs(t))
print(ans)
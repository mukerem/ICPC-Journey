# Time: 2022-07-19 15:11:05
# title: Inquiry I
# language: Python 3


n = int(input())
a = []
for i in range(n):
    t = int(input())
    a.append(t)
s = sum(a)
x = 0
idx = 0
ans = -1
for i in a:
    
    x += i*i
    s -= i
    
    ans = max(ans, x*s)
print(ans)

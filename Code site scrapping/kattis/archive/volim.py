# Time: 2022-08-14 14:10:36
# title: Volim
# language: Python 3


k = int(input())
n = int(input())
a = 0
ans = -1
for i in range(n):
    t, v =input().split()
    t = int(t)
    
    a += t
    if(a >= 210) and ans == -1:
        ans = k
    if v == 'T':
        k += 1
        if(k > 8):k = 1
print(ans)

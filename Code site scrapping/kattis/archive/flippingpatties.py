n = input()
dic = {}

for i in range(n):
    d,t = [int(k) for k in raw_input().split()]
    x = t - 2*d
    y = x + d
    if x in dic:dic[x] += 1
    else:dic[x]=1
    if y in dic:dic[y] += 1
    else:dic[y]=1
    if t in dic:dic[t] += 1
    else:dic[t]=1
ans = 0
for i in dic:
    ans = max(ans, dic[i])
if ans%2==0:
    ans /= 2
else:
    ans = (ans+1)/2
print ans

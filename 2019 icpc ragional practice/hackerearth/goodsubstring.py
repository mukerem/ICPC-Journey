n,k,m = [int(i) for i in input().split()]
x = list(input())
c = 0
a = x[:k].count('1')
last  = k
for i in range(k-1, -1, -1):
    if a<= m:
        break
    if x[i]=='1':
        x[i]='0'
        c+=1
        a-=1
count = a
for i in range(k, n):
    if  x[i] == '1' and x[i-k] == '0':
        count += 1
    elif  x[i] == '0' and x[i-k] == '1':
        count -= 1
    if count > m:
        x[i] = '0'
        c +=1
        count-=1
print(c)
print(''.join(x))

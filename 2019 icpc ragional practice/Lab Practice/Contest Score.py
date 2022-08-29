n,k = [int(i) for i in input().split()]
x = []
for i in range(n):
    x.append(int(input()))
c = min(x[:k])
total = c
t = c
x.remove(c)
n -= 1
while x:
    if k>n:
        c = min(x)
    else:
        c = min(x[:k])
    t += c
    total += t
    x.remove(c)
print(total)
    

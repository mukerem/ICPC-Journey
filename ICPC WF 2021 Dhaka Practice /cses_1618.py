n = int(input())
t = 0
k = 5
while k<=n:
    t += n//k
    k *= 5
print(t)

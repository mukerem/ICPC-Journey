n = int(input())
x = []
for i in range(n):
    x.append(int(input()))

t = 0
while len(x) > 1:
    c = min(x)
    t += c
    x.remove(c)
    d = x.index(max(x))
    x[d] -= c
    print(x)
    if x[d] == 0:
        x.pop(d)
    print(c)
print(t)

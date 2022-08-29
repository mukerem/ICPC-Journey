a = []
for i in range(5):
    x = [int(j) for j in raw_input().split()]
    a.append(sum(x))
ma = max(a)
print a.index(ma) + 1, ma

x =[]
for i in range(5):
    t = raw_input().split()
    r = [int(k) for k in t]
    x.append([sum(r),r])
s = max(x)

print x.index(s) + 1,
print s[0]

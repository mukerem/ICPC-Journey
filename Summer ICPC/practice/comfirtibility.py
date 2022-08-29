a = input()
b = set()
for i in range(a):
    c = [int(j) for j in raw_input().split()]
    c.sort()
    b.add(c)
print len(b)

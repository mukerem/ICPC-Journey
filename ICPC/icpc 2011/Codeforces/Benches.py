from math import ceil
n = input()
ad = input()
p = []
for i in range(n):
    x = input()
    p.append(x)
maxx = max(p)
total = sum(p)
maxx_person = maxx + ad
minn_person = max(maxx , ceil((ad + total)/float(n)))
print int(minn_person), maxx_person

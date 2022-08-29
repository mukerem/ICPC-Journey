a = []
b = []
for i in range(3):
    c = raw_input()
    x = c.split()
    a.append(int(x[0]))
    b.append(int(x[1]))

for i in a:
    if a.count(i) == 1:
        print i,
        break
for i in b:
    if b.count(i) == 1:
        print i
        break

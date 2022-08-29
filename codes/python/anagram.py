n = []
while 1:
    try:
        a = raw_input()
        for i in n:
            r = list(i[0])
            r.sort()
            s = list(a)
            s.sort()
            if r == s:
                i.append(a)
                break
        else:
            n.append([a])
    except EOFError:
        break
z = 10000000
x = [(z - len(i), i) for i in n]
for i in x:
    i[1].sort()
x.sort()
if len(x) >5:
    y = x[:5]
else:
    y = x
for i in y:
    print "Group of size " + str(z - i[0])+ ":",
    for j in i[1]:
        print j,
    print '.'

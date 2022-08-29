a = raw_input()
b = raw_input()
c = len(b) - 1

d = 0
for i in a[::-1]:
    if i != '0':
        break
    d += 1
if c >= d:
    c -= d
    a = a[::-1][d:][::-1]
else:
    a = a[::-1][c:][::-1]
    c = 0
e = len(a)

# print e,c,d
if c <= 0:
    print a
elif c >= e:
    print "0." + "0" * (c-e) + a
else:
    k = e - c 
    print  a[:k]+ "." + a[k:]
    
    

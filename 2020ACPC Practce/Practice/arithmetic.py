x = input()
s = ''
d = {str(i):'0' * (3 - len(bin(i)[2:])) + bin(i)[2:] for i in range(8)}
e = { '0' * (4 - len(bin(i)[2:])) + bin(i)[2:]: hex(i)[2:].upper() for i in range(16)}
for i in x:
    s += d[i]
tot = len(s)

if tot%4 != 0:
    s = '0'*(4-tot%4) + s
    tot += (4-tot%4)
c = []
for i in range(0, tot, 4):
    z = s[i:i+4]
    c.append(e[z])
c = ''.join(c)
k = 0
for i in c:
    if i != '0':
        break
    k += 1
if k == len(c):k=0
print (c[k:])

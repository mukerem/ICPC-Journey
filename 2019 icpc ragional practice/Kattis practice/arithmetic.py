x = raw_input()
s = ''
for i in x:
    f = str(bin(int(i)))[2:]
    f = '0'*(3-len(f)) +f
    s += f
s = '0'*(len(s)%4) + s
c = ''
for i in range(0, len(s), 4):
    z = s[i:i+4]
    c+= str(hex(int(z, 2)))[2:].upper()
    
k = 0
for i in c:
    if i != '0':
        break
    k += 1
print c[k:]

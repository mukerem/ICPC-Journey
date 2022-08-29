s = input()
x,c = s.split('=')
a,b = x.split('+')
a = a.strip()
b = b.strip()
c = c.strip()
if int(a) + int(b) == int(c):
    print('YES')
else:
    print('NO')

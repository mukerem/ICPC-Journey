# Time: 2022-08-13 21:16:46
# title: DRM Messages
# language: Python 3


s = input()
n = len(s)
a = s[:n//2]
b = s[n//2:]
x = [ord(i)-65 for i in a]
y = [ord(i)-65 for i in b]

z = sum(x)
zz = sum(y)
for i in range(n//2):
    x[i] = (x[i] + z) % 26
    y[i] = (y[i] + zz) % 26
    
for i in range(n//2):
    x[i] = (y[i] + x[i]) % 26
s = ''
for i in x:
    s += chr(i+65)
print(s)
    
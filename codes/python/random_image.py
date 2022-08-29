from random import shuffle
a = []
for i in range(65,91):
    x = chr(i)
    a.append(x)
for i in range(97,123):
    x = chr(i)
    a.append(x)
for i in range(48,58):
    x = chr(i)
    a.append(x)
b = range(200000)
shuffle(a)
shuffle(b)
e = []
for i in b:
    c = i * 284001
    x = []
    for k in range(6):
        r = c % 62
        c /= 62
        x.append(r)
    shuffle(x)
    z = ''.join([a[k] for k in x])
    e.append(z)
shuffle(e)
f = list(set(e))
image = f[:100000]
print image[:100]
        

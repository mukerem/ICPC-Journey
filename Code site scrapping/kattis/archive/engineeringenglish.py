# Time: 2022-08-26 12:00:31
# title: Engineering English
# language: Python 3


a = ''
b = []
while 1:
    try:
        s = input()
        x = s.split()
        b.append(x)
    except:
        break
k = []
r = []
for i in b:
    s = []
    for j in i:
        if j.lower() in k:
            s.append('.')
        else:
            s.append(j)
            k.append(j.lower())
    
    r.append(' '.join(s))
ans = '\n'.join(r)
print(ans)
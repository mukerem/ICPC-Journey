# Time: 2022-08-14 18:48:51
# title: Karte
# language: Python 3


s = input()
d = {
    'P': [],
    'K': [],
    'H': [],
    'T': []
}
c = []
n = len(s)
t = [(s[i], s[i+1:i+3]) for i in range(0,n,3)]
f = 0
#print(t)
for i in t:
    x,y = i
    if i in c:
        f = 1
        break
    d[x].append(y)
    c.append(i)
if f:
    print('GRESKA')
else:
    print(13-len(d['P']), 13-len(d['K']), 13-len(d['H']), 13-len(d['T']))

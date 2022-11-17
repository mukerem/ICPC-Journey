# Time: 2022-08-17 20:18:59
# title: Blåtand
# language: Python 3


n = int(input())
l = []
r = []
x = []
for i in range(n):
    a,b = input().split()
    if b == 'b':
        if a[0] in '-+' :
            x.append(1)
        else:
            x.append(0)
    elif a[0] in '-+':
        l.append(int(a))
    else:
        r.append(int(a[-1] + a[:-1]))
l = list(set(l))
r = list(set(r))
a = 0
for i in l:
    if i > 0:a+=1
b = len(l) - a
c = 0
for i in r:
    if i > 0:c+=1
d = len(r) - c


if 0 in x and 1 in x:
    print(2)
elif 0 in x:
    if  a == 8 or b == 8:
        print(2)
    else:
        print(0)
        
else:
    if c==8 or d == 8:
        print(2)
    else:
        print(1)
#print(a,b,c,d, x, l, r)

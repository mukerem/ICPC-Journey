# Time: 2022-08-17 20:34:58
# title: Yoda
# language: Python 3


a = str(input())
b = str(input())
a = '0' * (max(len(a), len(b)) - len(a)) + a
b = '0' * (max(len(a), len(b)) - len(b)) + b
c = ''
d = ''
for i,j in zip(a,b):
    if i == j:
        c+=i
        d+=j
    elif i>j:
        c += i
    else:
        d += j
if c:
    print(int(c))
else:
    print('YODA')
    
if d:
    print(int(d))
else:
    print('YODA')
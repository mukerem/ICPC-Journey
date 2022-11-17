# Time: 2022-08-27 11:18:35
# title: UTF-8
# language: Python 3


a = {'0': 0, '10': 0, '110': 0, '1110':0, '11110': 0}
ok = True
n = int(input())
for i in range(n):
    s = input()
    if s[0] == '0':
        a['0'] += 1
    elif s[:2] == '10':
        a['10'] += 1
    elif s[:3] == '110':
        a['110'] += 1
    elif s[:4] == '1110':
        a['1110'] += 1
    elif s[:5] == '11110':
        a['11110'] += 1
    else:
        ok=False
        

b = a['0']
c = min(a['110'], a['10'])
d = min(a['1110'], (a['10'] - c) // 2)
e = min(a['11110'], (a['10'] - c - 2*d) // 3)

if ok == False:
    print('invalid')
elif e+b+c+d == 0 or b + 2*c + 3*d + 4*e != n:
    print('invalid')
else:
    print(b)
    print(c)
    print(d)
    print(e)
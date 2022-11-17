# Time: 2022-08-25 22:22:06
# title: Proofs
# language: Python 3


a = {}
b = 0
for _ in range(int(input())):
    s = input()
    if b > 0:
        continue
    if s[0:2] == '->':
        for i in s[3:].split():
            a[i] = True
    else:
        x, y = s.split('->')
        z = x.split()
        for i in z:
            if not i in a:
                b = _ + 1
                break
        else:
            for i in y.split():
                a[i] = True

if b == 0:
    print('correct')
else:
    print(b)
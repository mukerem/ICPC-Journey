# Time: 2022-08-23 09:04:57
# title: Driver's Dilemma
# language: Python 3


c, x, m = map(float, input().split())
a = []
b = [55,60,65,70,75,80]
for i in range(6):
    _, y = input().split()
    a.append((float(y), b[i]))

d = []
c /= 2
for i, j in a:
    f = m*( x / j + 1 / i)
    if c >= f:
        d.append(j)
if d:
    print('YES', max(d))
else:
    print('NO')

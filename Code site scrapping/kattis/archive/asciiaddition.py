# Time: 2022-08-16 19:13:43
# title: ASCII Addition
# language: Python 3


a = """ ....x.xxxxx.xxxxx.x...x.xxxxx.xxxxx.xxxxx.......xxxxx.xxxxx.xxxxx
 ....x.....x.....x.x...x.x.....x.........x...x...x...x.x...x.x...x
 ....x.....x.....x.x...x.x.....x.........x...x...x...x.x...x.x...x
 ....x.xxxxx.xxxxx.xxxxx.xxxxx.xxxxx.....x.xxxxx.xxxxx.xxxxx.x...x
 ....x.x.........x.....x.....x.x...x.....x...x...x...x.....x.x...x
 ....x.x.........x.....x.....x.x...x.....x...x...x...x.....x.x...x
 ....x.xxxxx.xxxxx.....x.xxxxx.xxxxx.....x.......xxxxx.xxxxx.xxxxx"""
a = a.split('\n')
b = ['1', '2', '3', '4', '5', '6', '7', '+', '8', '9', '0']
d = {}
e = {}
for i in range(11):
    c = []
    for j in range(7):
        c.append(a[j][i*6 + 1: i*6+6])
    d[b[i]] = c
    e[tuple(c)] = b[i]

x = []
for i in range(7):
    x.append(' ' + input())
h = []
for i in range(len(x[0]) // 6):
    c = []
    for j in range(7):
        c.append(x[j][i*6 + 1: i*6+6])
    h.append(e[tuple(c)])
ans = eval(''.join(h))
ans = str(ans)
u = ['' for i in range(7)]
for i in ans:
    v = d[i]
    for j in range(7):
        u[j] += v[j] + '.'
for i in u:
    print(i[:-1])


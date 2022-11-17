# Time: 2022-08-22 08:36:08
# title: Imperial Measurement
# language: Python 3


a,b,c,d = input().split()
a = int(a)

m = [['inch', 'in', 1000], ['foot', 'ft', 12], ['yard', 'yd', 3],
    ['chain', 'ch', 22], ['furlong', 'fur', 10], ['mile', 'mi', 8],
    ['league', 'lea', 3]
    ]
t = 1
for i in m:
    t *= i[-1]
    i[-1] = t

x = 1
y = 1
for i in m:
    if b in i:
        x = i[-1]
    if d in i:
        y = i[-1]
print(a*x/y)
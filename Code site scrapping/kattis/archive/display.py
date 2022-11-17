# Time: 2022-08-26 08:57:46
# title: Digital display
# language: Python 3


a = """
    +  +---+     +   +  +---+
    |  |         |   |      |
    |  |      o  |   |      |
    +  +---+     +---+      +
    |  |   |  o      |      |
    |  |   |         |      |
    +  +---+         +      +
+---+  +---+     +---+  +---+
    |      |     |      |   |
    |      |  o  |      |   |
+---+  +---+     +---+  +---+
|          |  o      |      |
|          |         |      |
+---+  +---+     +---+  +---+
+---+  +---+     +---+  +---+
|   |  |   |     |   |  |   |
|   |  |   |  o  |   |  |   |
+   +  +   +     +   +  +---+
|   |  |   |  o  |   |  |   |
|   |  |   |     |   |  |   |
+---+  +---+     +---+  +---+
"""
a = a.split('\n')
a = a[1:-1]
b = [a[:7], a[7:14], a[14:]]
c = []
d = [1,6,4,7,2,3,5,9,0,0,0,8, ':']



for s in b:
    
    k = [['' for i in range(7)] for _ in range(4)]
    idx = 0
    for i in s:
        k[0][idx] += i[:5]
        k[1][idx] += i[7:12]
        k[2][idx] += i[17:22]
        k[3][idx] += i[24:29]
        idx += 1
    c.extend(k)
q = [' ' for i in range(7)]
q[2] = 'o'
q[4] = 'o'
c.append(q)

a = {}
for i,j in zip(d, c):
    a[str(i)] = j

    
while 1:
    s = input()
    if s == 'end':
        break
    for i in range(7):
        k = ''
        for j in s:
            k += a[j][i] + '  '
        print(k[:-2])
    print('\n')
print('end')
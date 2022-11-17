# Time: 2022-08-15 20:20:31
# title: Križaljka
# language: Python 3


a, b = input().split()
for i in range(len(a)):
    if a[i] in b:
        x = i
        y = b.index(a[i])
        break
z = [['.' for i in range(len(a))] for j in range(len(b))]
for i in range(len(a)):
    z[y][i] = a[i]
for i in range(len(b)):
    z[i][x] = b[i]
for i in z:
    print(''.join(i))
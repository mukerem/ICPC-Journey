# Time: 2022-08-26 22:32:47
# title: Arithmetic Decoding
# language: Python 3


n = int(input())
d = int(input())
p = d / 8
m = input()
v = 0
k = 1
for i in m[2:]:
    if i == '1':
        v += 1 / (2 ** k)
    k += 1
x = ''
a = 0
b = 1
for i in range(n):
    c = a + p * (b - a)
    if c > v:
        b = c
        x += 'A'
    else:
        a = c
        x += 'B'
print(x)

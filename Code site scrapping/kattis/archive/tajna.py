# Time: 2022-08-23 21:34:05
# title: Tajna
# language: Python 3


s = input()
n = len(s)
k = 1
t = int(n ** 0.5)
for i in range(2, t +1):
    if n % i == 0:
        k = i
r = k
c = n // k

idx = 0
a = [['' for i in range(c)] for j in range(r)]
for i in range(c):
    for j in range(r):
        a[j][i] = s[idx]
        idx += 1
u = ''
for i in a:
    u += ''.join(i)
print(u)
# Time: 2022-08-17 19:20:33
# title: Broken Swords
# language: Python 3


n = int(input())
a = 0
b = 0
for i in range(n):
    x = input()
    y = x[:2]
    z = x[2:]
    a += y.count('0')
    b += z.count('0')

s = min(a//2, b//2)
print(s, a-2*s, b-2*s)
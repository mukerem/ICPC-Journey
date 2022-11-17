# Time: 2022-08-14 09:26:43
# title: Racing Around the Alphabet
# language: Python 3


from math import pi
d = {}
for i in range(26):
    d[chr(i + 65)] = i
d[' '] = 26
d["'"] = 27
g = pi * 60 / 28
for _ in range(int(input())):
    a = 0
    s = input()
    n = len(s)
    for i in range(n-1):
        x = d[s[i]]
        y = d[s[(i+1)]]
        d1 = abs(x-y)
        d2 = 28 - d1
        a += min(d1, d2)
    a *= g
    print(n + a / 15)

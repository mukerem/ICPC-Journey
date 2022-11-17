# Time: 2022-08-26 21:03:20
# title: Cokolada
# language: Python 3


n = int(input())

s = bin(n)[2:]
a = 2 ** len(s)
b = s[::-1].index('1')
c = len(s) - b
if n == 2 ** (len(s)-1):
    print(n, 0)
else:
    print(a, c)

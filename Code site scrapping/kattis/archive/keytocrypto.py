# Time: 2022-08-15 10:27:29
# title: The Key to Cryptography
# language: Python 3


b = input()
k = input()
n = len(k)
m = len(b)

a = ''

idx = -1
for i in range(m):
    d = chr(( - ord(k[i]) + ord(b[i])) % 26  + 65)
    a += d
    k += d
print(a)
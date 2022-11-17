# Time: 2022-08-14 13:23:05
# title: Kleptography
# language: Python 3


n, m = map(int, input().split())
k = input()
b = input()
a = k

idx = -1
for i in range(m-1, n-1, -1):
    d = chr(( - ord(a[idx]) + ord(b[i])) % 26  + 97)
    a = d + a
    idx -= 1
print(a)
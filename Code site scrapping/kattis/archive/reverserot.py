# Time: 2022-08-15 16:37:46
# title: Reverse Rot
# language: Python 3


a = [chr(i) for i in range(65, 65 + 26)]
a.append('_')
a.append('.')
while 1:
    x = input()
    if x == '0':
        break
    n, s = x.split()
    s = s[::-1]
    n = int(n)
    b = ''
    for i in s:
        x = a.index(i)
        x = (x + n) % 28
        b += a[x]
    print(b)
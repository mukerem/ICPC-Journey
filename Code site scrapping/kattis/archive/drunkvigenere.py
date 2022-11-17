# Time: 2022-08-14 20:17:55
# title: Drunk Vigenère
# language: Python 3


a = input()
b = input()
c = ''
for i in range(len(a)):
    if i%2 == 1:
        d = chr(65 + (ord(a[i]) + ord(b[i]) - 130) % 26)
    else:
        d = chr(65 + (ord(a[i]) - ord(b[i])) % 26)
    c += d
print(c)
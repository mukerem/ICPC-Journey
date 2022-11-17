# Time: 2022-08-16 16:50:54
# title: Ragged Right
# language: Python 3


a = []
while 1:
    try:
        s = input()
        a.append(len(s))
    except:
        break

m = max(a)
a.pop()
b = 0
for i in a:
    b += (m-i) ** 2
print(b)
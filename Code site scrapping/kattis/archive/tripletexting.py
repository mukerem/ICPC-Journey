# Time: 2021-04-05 21:59:41
# title: Triple Texting
# language: Python 3


a = input()
b = len(a)//3
c = []
for i in range(3):
    c.append(a[b*i:b*i + b])

for i in c:
    if c.count(i) > 1:
        print(i)
        break

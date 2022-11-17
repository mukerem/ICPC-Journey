# Time: 2022-08-15 22:53:20
# title: Compound Words
# language: Python 3


a = []
b = set()
while 1:
    try:
        a.extend(input().split())
    except:
        break
for i in range(len(a)):
    for j in range(len(a)):
        if i!=j:
            b.add(a[i] + a[j])
c = list(b)
c.sort()
for u in c:
    print(u)
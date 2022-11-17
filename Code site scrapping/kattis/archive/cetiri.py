# Time: 2022-08-15 23:30:44
# title: Cetiri
# language: Python 3


a = list(map(int, input().split()))
a.sort()
b = []
for i in range(len(a)-1):
    b.append(a[i+1] - a[i])
m = max(b)
if b.count(m) != 1:
    print(m + a[-1])
else:
    m //= 2
    for i in  range(len(a)-1):
        if a[i] +m != a[i+1]:
            print(a[i] + m)
            break
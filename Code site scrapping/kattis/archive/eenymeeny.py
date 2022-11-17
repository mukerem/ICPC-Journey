# Time: 2022-08-17 17:30:47
# title: Eeny Meeny
# language: Python 3


a = len(input().split()) - 1
x = []
y = []
b = []
n = int(input())
for i in range(n):
    b.append(input())
k = 0
for i in range(n):
    c = len(b)
    k = k + a
    k = k % c
    if i%2 == 0:
        x.append(b[k])
    else:
        y.append(b[k])
    b.pop(k)
    if k == len(b):
        k = 0
print(len(x))
for i in x:
    print(i)
print(len(y))
for i in y:
    print(i)
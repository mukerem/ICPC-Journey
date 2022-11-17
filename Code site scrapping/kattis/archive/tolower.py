# Time: 2022-08-23 20:12:27
# title: ToLower
# language: Python 3


p,t = map(int, input().split())
k = 0
for i in range(p):
    a = True
    for j in range(t):
        b = input()[1:]
        if not b == b.lower():
            a = False
    if a == True:
        k += 1
print(k)
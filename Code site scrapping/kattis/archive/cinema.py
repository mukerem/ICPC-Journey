# Time: 2022-08-26 23:07:50
# title: Cinema Crowds
# language: Python 3


n, m = map(int, input().split())
a = [int(i) for i in input().split()]
b = 0
c = 0
for i in a:
    if i + b <= n:
        b += i
    else:
        c += 1
print(c)
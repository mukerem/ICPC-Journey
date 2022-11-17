# Time: 2021-09-20 13:51:33
# title: Watch Out For Those Hailstones!
# language: Python 3


n = int(input())
s = n
while n != 1:
    if n% 2 == 0:
        n //= 2
    else:
        n = 3*n + 1
    s += n

print(s)

# Time: 2022-08-15 21:10:46
# title: Hailstone Sequences
# language: Python 3


n = int(input())
a = 1
while n > 1:
    if n%2:
        n =  n * 3 + 1
    else:
        n //= 2
    a += 1
print(a)
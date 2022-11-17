# Time: 2022-08-14 17:25:11
# title: Mixed Fractions
# language: Python 3


while 1:
    a,b = map(int, input().split())
    if a+b == 0:
        break
    print(a//b, f'{a%b} / {b}')
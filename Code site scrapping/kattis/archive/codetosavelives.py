# Time: 2022-08-14 11:54:43
# title: Code to Save Lives
# language: Python 3


for _  in range(int(input())):
    a = input().split()
    b = input().split()
    a = int(''.join(a))
    b = int(''.join(b))
    c = a+b
    d = list(str(c))
    print(*d)
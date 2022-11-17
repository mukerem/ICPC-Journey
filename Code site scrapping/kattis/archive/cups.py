# Time: 2022-08-14 14:32:22
# title: Stacking Cups
# language: Python 3


a = []
for _ in range(int(input())):
    b, c = input().split()
    if b.isdigit():
        a.append((int(b), c))
    else:
        a.append((2*int(c), b))
a.sort()
for i,j in a:
    print(j)
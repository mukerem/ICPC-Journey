# Time: 2022-08-14 12:21:44
# title: Eligibility
# language: Python 3


for _ in range(int(input())):
    e = 0
    a,b,c,d = input().split()
    b = [int(i) for i in b.split('/')]
    c = [int(i) for i in c.split('/')]
    d = int(d)
    if b[0] >= 2010:
        print(a, 'eligible')
    elif c[0] >= 1991:
        print(a, 'eligible')
    elif d > 40:
        print(a, 'ineligible')
    else:
        print(a, 'coach petitions')
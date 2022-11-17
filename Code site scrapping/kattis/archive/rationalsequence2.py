# Time: 2022-08-14 15:30:30
# title: A Rational Sequence 2
# language: Python 3


for _ in range(int(input())):
    k, p = input().split()
    a,b = map(int, p.split('/'))

    h = ''
    while a*b != 1:
        f = abs(a-b)
        if a > b:
            a = a-b
            h += '1'
        else:
            b = b - a
            h += '0'
    h = h[::-1]
    h = '1' + h
    print(k, int(h, 2))

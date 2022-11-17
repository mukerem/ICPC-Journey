# Time: 2022-08-14 14:34:20
# title: Square Peg
# language: Python 3


l,r = map(int, input().split())
d = 2*r
L = l * (2 ** 0.5)
if L<= d:
    print('fits')
else:
    print('nope')
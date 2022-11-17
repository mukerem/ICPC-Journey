# Time: 2022-08-13 20:07:10
# title: Seven Wonders
# language: Python 3


s = input()
a = s.count('T')
b = s.count('C')
c = s.count('G')

d = a*a + b*b + c*c
e = d + min(a,b,c) * 7
print(e)
# Time: 2020-12-18 09:57:37
# title: Pizza Crust
# language: Python 3


a,b = [float(i) for i in input().split()]
c = a-b
print(round(100 * c*c / (a*a), 12))
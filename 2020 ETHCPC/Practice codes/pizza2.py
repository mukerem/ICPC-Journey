a,b = [float(i) for i in input().split()]
c = a-b
print(round(100 * c*c / (a*a), 12))

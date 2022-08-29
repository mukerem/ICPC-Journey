f=  open('stars.in', 'r')
for i in range(int(f.readline())):
    a,b = [int(j) for j in f.readline().split()]
    a -= 1
    x = a//4 - a//100 + a//400
    y = b//4- b//100 + b//400
    print(y-x)

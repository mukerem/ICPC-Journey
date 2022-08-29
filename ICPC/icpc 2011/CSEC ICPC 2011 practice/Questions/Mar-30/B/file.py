import random

f = open("rend")

data = []
x =500
for i in range(500):
    data.append(x)
    x =x+1
x =98999
for i in range(500):
    data.append(x)
    x =x+1

random.shuffle(data)
f2 = open("rende", "w+")
for i in data:
    print (i)
    if int(i) < 1:
	i = int(i)+5
    f2.write(str(i))
    f2.write('\n')

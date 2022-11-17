from math import pow
b = pow(2, -1.25)
a = pow(2, -0.75)
n = input()
x = [int(i) for i in raw_input().split()]
y = [0]
#x.insert(0, 0)
k = -1
s = 0
for i in range(n-1):
    s += x[i]
    if(s >= pow(2, i+1)):
        k = i
        y.append(int(x[i] - (s - pow(2, i+1))))
        break
    s *= 2
    y.append(x[i])

#print y


if k == -1:
    print 'impossible'
else:
    c = 0
    d = []
    for i in range(len(y)-1, 0, -1):
        y[i-1] +=y[i]/2

    for i in y[1:]:
        c += a * i/2
        a /= 2
        a,b = b,a
    print c

      

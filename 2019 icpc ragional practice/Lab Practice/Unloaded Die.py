a = [float(i) for i in input().split()]
m = 100000000000
c = sum([(i+1) * a[i] for i in range(6)])
for i in range(6):
    x = 3.5 - (c - (i+1) * a[i])
    if a[i]:
        b = x/a[i]
    else:
        if x == 0:
            b = i+1
        else:
            b = 1000000000000
    m = min(abs(i+1 - b), m)
m = round(m,3)
print("%.3f" %m)
    

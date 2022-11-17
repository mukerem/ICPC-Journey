buy = [0,0]
split = []

while 1:
    a = raw_input().split()
    if a[0] == 'buy':
        x = int(a[1])
        y = int(a[2])
        buy[1] = ((buy[0] * buy[1]) + x*y)/ float(buy[0] + x)
        buy[0] += x
    elif a[0] == "sell":
        x = int(a[1])
        buy[0] -= x
        
    elif a[0] == 'split':
        x = int(a[1])
        buy[0] *= x
        buy[1] /= float(x)

    elif a[0] == 'merge':
        x = int(a[1])

        buy[0] = buy[0] // x
        buy[1] = buy[1] * x
        
    elif a[0] == 'die':
        tot = 0.0
        x= int(a[1])
        i = buy[0]
        j = buy[1]
        if x > j:
            tot = (i * (x - (x - j)*0.3))
        else:
            tot = i*x
        print tot
        break

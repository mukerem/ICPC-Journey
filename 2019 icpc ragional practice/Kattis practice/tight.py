while True:
    try:
        k,n = [int(i) for i in  raw_input().split()]
        k += 1
        if k == 1 or k == 2:
            print '100.000000000'
        elif n == 1:
            print '100.000000000'
        else:
            x = (3)**(n-1) * k
            y = k**n
            z = x
            s = int(z*0.5925925925925926)
            x -= s
            print ("%.7f"%(round(100*x/float(y),7)))
            print(x,y)
    except EOFError:
        break

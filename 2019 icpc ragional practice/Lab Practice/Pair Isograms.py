t = input()
for i in range(t):
    x = raw_input()
    y = list(x)
    y.pop()
    #print y
    for k in y:
        if(y.count(k) != 2 ):
            print ''.join(y),'--- not pair isograms'
                 
            break
    else:
        print ''.join(y),'--- pair isograms'
    print

t = input()
for i in range(t):
    x = list(raw_input())
    y = list(raw_input())
    for i in x:
        if i in y:
            print 'YES'
            break

    else:
        print 'NO'
    

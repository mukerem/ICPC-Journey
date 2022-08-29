a = input()
a -= 2
if a <2:
    print -1
else:
    from math import sqrt
    x = int(sqrt(a))
    for i in range(2,x+1):
        if a%i == 0:
            print -1
            break
    else:
        print 2,a

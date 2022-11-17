# Time: 2019-11-19 18:01:45
# title: ICPC Tutorial
# language: Python 3


from math import *
m,n,t = [int(i) for i in input().split()]
if t==1:
    s = 1
    i=1
    while i<= n:
        s *= i
        i += 1
        if s>m:
            print("TLE")
            break
    else:
        print('AC')
elif t == 2:
    s = 1
    i=0
    while i< n:
        s *= 2
        i += 1
        if s>m:
            print("TLE")
            break
    else:
        print('AC')
elif t == 3:
    s = 1
    i = 0
    while i< 4:
        s *= n
        i += 1
        if s>m:
            print("TLE")
            break
    else:
        print('AC')
elif t == 4:
    s = 1
    i = 0
    while i< 3:
        s *= n
        i += 1
        if s>m:
            print("TLE")
            break
    else:
        print('AC')
elif t == 5:
    s = 1
    i = 0
    while i< 2:
        s *= n
        i += 1
        if s>m:
            print("TLE")
            break
    else:
        print('AC')

elif t == 6:
    s = n * log2(n);

    if s>m:
        print("TLE")
        
    else:
        print('AC')
else:
    s = n;

    if s>m:
        print("TLE")
    else:
        print('AC')

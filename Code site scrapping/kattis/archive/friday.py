# Time: 2022-08-17 22:07:52
# title: Friday the 13th
# language: Python 3


for  _ in range(int(input())):
    d, m = map(int, input().split())
    a = [int(i) for i in input().split()]
    
    t = 0
    k = 0
    for i in a:
        if i >= 13 and k%7 == 0:
            t+= 1
        k += i
    print(t)
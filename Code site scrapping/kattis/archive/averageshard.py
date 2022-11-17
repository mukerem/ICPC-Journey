# Time: 2020-12-18 09:36:40
# title: Paradox With Averages (Hard)
# language: Python 3


for _ in range(int(input())):
    input()
    a,b = [int(i) for i in input().split()]
    x = [int(i) for i in input().split()]
    y = [int(i) for i in input().split()]
    x.sort()
    y.sort()
    c = 0
    d = []
    sM = sum(x)
    sE = sum(y)
    aveM = sM/a
    aveE= sE/b
    for i in range(a):
        if x[i] < aveM and x[i] > aveE:
            c += 1
                
    print(c)
    

# Time: 2019-11-20 16:40:45
# title: Math Worksheet
# language: Python 3


n = int(input())
v = 0
while True:
    if n == 0:
        break
    if v:
        print()
    s = []
    m = -1
    for i in range(n):
        x = input()
        y = str(eval(x))
        s.append(y)
        if m<len((y)):
            m = len(y)
    
    
    c = 0
    k = 1
    for i in s:
        if c+2*m+1>50 or k == len(s):
            z = "%"+str(m)+"s"
        else:
            z = "%"+str(m)+"s "
        print(z%i, end="")
        c += m+1
        if c+m>50 and k != len(s):
            print()
            c = 0
        k+=1
    print()
    n = int(input())
    v+=1
        

# Time: 2022-08-18 11:24:59
# title: Pachyderm Peanut Packing
# language: Python 3


while 1:
    n = int(input())
    if n == 0:
        break
    a = []
    for i in range(n):
        x = input().split()
        b = list(map(float, x[:4]))
        a.append((b, x[-1]))
    m = int(input())
    for i in range(m):
        x,y,z = input().split()
        x = float(x)
        y = float(y)
        for j, k in a:
            r,s,t,u = j
            if r<=x<=t and s<=y<=u:
                if z == k:
                    print(z, 'correct')
                else:
                    print(z, k)
                break
        else:
            print(z, 'floor')
    print()

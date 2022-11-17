# Time: 2022-08-18 14:39:01
# title: Lawn Mower
# language: Python 3


def lawn(x, k, t):
    x.sort()
    n = len(x)
    #print(x,k,t)
    if x[0] > k or x[-1] < t-k:
        return 0
    for i in range(n-1):
        if x[i+1] - x[i] > 2*k:
            return 0
    return 1

while 1:
    s = input()
    if s == '0 0 0.0':
        break
    nx, ny, w = s.split()
    nx = int(nx)
    ny = int(ny)
    w = float(w)
    
    x = list(map(float, input().split()))
    y = list(map(float, input().split()))
    if(lawn(x, w/2, 75)) and (lawn(y, w/2, 100)):
        print('YES')
    else:
        print('NO')
    

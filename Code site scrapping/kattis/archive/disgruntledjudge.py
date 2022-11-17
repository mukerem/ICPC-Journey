# Time: 2020-12-16 10:33:12
# title: Disgruntled Judge
# language: Python 3


x = []
for _ in range(int(input())):
    x.append(int(input()))
n = len(x)
if n == 1:
    print(x[0])
elif n == 2:
    print(x[1])
else:
    y = []
    for i in x:
        y.append(i)
        y.append(-1)
    N = 10001
    if x[1] > x[2]:
        for a in range(10001):
            if (x[1] - x[2] == (a*a*(x[0] - x[1])) % N):
                for b in range(10001):
                    if(x[1] == (a*a*x[0] + a*b + b) % N):
                        for i in range(1, 2*n):
                            c = (a* y[i-1] + b)%N
                            if y[i] == -1:y[i] = c
                            if (y[i] != c):
                                break
                            
                            
                        else:
                            for i in range(1, 2*n, 2):
                                print(y[i])
                            exit(0)
    else:
        for a in range(10001):
            if (x[2] - x[1] == (a*a*(x[1] - x[0])) % N):
                for b in range(10001):
                    if(x[1] == (a*a*x[0] + a*b + b) % N):
                        for i in range(1, 2*n):
                            c = (a* y[i-1] + b)%N
                            if y[i] == -1:y[i] = c
                            if (y[i] != c):
                                break
                            
                            
                        else:
                            for i in range(1, 2*n, 2):
                                print(y[i])
                            exit(0)

# Time: 2022-08-18 08:32:52
# title: Polynomial Multiplication 1
# language: Python 3


for _ in range(int(input())):
    n = int(input())+1
    a = list(map(int, input().split()))[::-1]
    m = int(input())+1
    b = list(map(int, input().split()))[::-1]
    c = [0] * (n+m)
    for i in range(n):
        for j in range(m):
            d =a[i]*b[j]
            e = i+j
            c[e] += d
    f = n+m-2
    c = c[:f+1]
    c = c[::-1]
    
    print(f)
    print(*c)
    
            

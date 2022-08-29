matrix = [[1,1],[1,0]]

def mult(a,b):
    c = [[0, 0], [0, 0]]
    c[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0]
    c[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1]
    c[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0]
    c[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1]

    return c

def fib(m, n):
    if n == 1:
        return m
    elif n%2 == 0:
        z = fib(m, n//2)
        return mult(z, z)
    else:
        z = fib(m, n//2)
        x = mult(z, z)
        return mult(x, m)
    
k = 30000
result = fib(matrix, k)
print result[0][0]

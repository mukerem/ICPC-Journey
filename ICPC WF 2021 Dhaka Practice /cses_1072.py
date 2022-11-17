n = int(input())

def knights(n):
    m = n*n
    t = m*(m-1) // 2 - 4*(n-1)*(n-2)
    return t

for k in range(1, n+1):
    print(knights(k))

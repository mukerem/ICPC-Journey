def countWays(n, m):
    count =[0] * (n+2)
    for i in range(1, n + 1):
        if (i > m):
            count[i] = count[i-1] + count[i-m]
        elif (i < m or i == 1):
            count[i] = 1
        else:
            count[i] = 2
     
    print(count)
    return count[n]
 
n, m  = map(int, input().split())
if n<m:n,m=m,n
print(countWays(n, m))


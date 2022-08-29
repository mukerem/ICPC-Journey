binomial = [[1 for i in range(71)] for j in range(71)]

for n in range(1, 71):
    for k in range(1, n+1):
        binomial[n][k] = binomial[n-1][k-1] + binomial[n][k-1]
n,k = [int(i) for i in input().split()]
print(binomial[2*n][k] // ())

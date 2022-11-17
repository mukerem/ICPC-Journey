# Time: 2021-01-22 17:11:04
# title: Election
# language: Python 3


C = [[0 for x in range(51)] for x in range(51)]
def binomialCoef(n, k):
 
    # Calculate value of Binomial
    # Coefficient in bottom up manner
    for i in range(n+1):
        for j in range(min(i, k)+1):
            # Base Cases
            if j == 0 or j == i:
                C[i][j] = 1
 
            # Calculate value using
            # previously stored values
            else:
                C[i][j] = C[i-1][j-1] + C[i-1][j]

# Driver program to test above function
n = 50
k = 50
binomialCoef(n, k)


for _ in range(int(input())):
    n,v1, v2, w = [int(k) for k in input().split()]
    m = n // 2 + 1
    a = m - v1
    b = n - (v1 + v2)
    if v1 >= m:
        print('GET A CRATE OF CHAMPAGNE FROM THE BASEMENT!')
    elif v2 >= m:
        print('RECOUNT!')
    elif a > b:
        print('RECOUNT!')
    else:
        s = 0
        for i in range(b, a-1, -1):
            s += C[b][i]
        per = 100 * s / pow(2, b)
        #print(a, per, b, s)
        if per > w:
            print('GET A CRATE OF CHAMPAGNE FROM THE BASEMENT!')
        else:
            print('PATIENCE, EVERYONE!')

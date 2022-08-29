initial = [[0,1],[1,1]];
identity = [[1,0],[0,1]]
def matrix_mult(a,b):
    result = [[0,0],[0,0]]
    for i in range(2):
        for j in range(2):
            for k in range(2):
                result[i][j] += a[i][k]*b[k][j]
    return result
def fibonaci(a,n):
    if n==0:
        return identity
    ans = fibonaci(a,n/2)
    ans = matrix_mult(ans,ans)
    if n%2 == 1:
        ans = matrix_mult(ans,initial)
    return ans
#n = input()
#print fibonaci(initial, n)[0][1]
for i in range(1,1001):
    x= fibonaci(initial, i)[0][1]
    print i,len(str(x))



a = [[0.16, 0.24, 0.24, 0.16],
    [0.24, 0.36, 0.36, 0.24] ,
    [0.24, 0.36, 0.36, 0.24],
    [0.16, 0.24, 0.24, 0.16]]
print(a)
b = [[1,0,1,1],[0,0,0,1],[1,0,0,0],[0,0,0,0]]

def pro(i, j, k, zero):
    p = a[i][j]
    if zero and k%2 == 0 or k%2 == 1 and not zero: # for odd
        #return 2 * a[i][j] * (1 - a[i][j])
        #return (a[i][j]**3)  +  3 * a[i][j] * ((1 - a[i][j]) ** 2)
        return 0.5 * ( 1 - pow(2*p-1, k))
    else :
        #return a[i][j] ** 2  + (1 - a[i][j]) ** 2
        #return 3 * (a[i][j]**2)  * (1 - a[i][j]) + ((1 - a[i][j]) ** 3)
        return 0.5 * ( 1 + pow(2*p-1, k))
ans = 0

for i in range(4):
    for j in range(4):
        zero = True
        if b[i][j] == 1:
            zero = False
        ans += pro(i, j, , zero)
print('%.5f' % ans)


a = [[0.25, 0.333333, 0.25 ],
    [0.333333, 0.444444, 0.333333],
    [0.25, 0.333333, 0.25]]
b = [[1,1,1],[0,0,0],[1,0,0]]
ans = 0
for i in range(3):
    for j in range(3):
        zero = True
        if b[i][j] == 1:
            zero = False
        ans += pro(i, j, 3, zero)
print('%.5f' % ans)


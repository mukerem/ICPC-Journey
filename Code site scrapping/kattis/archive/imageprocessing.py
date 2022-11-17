# Time: 2022-08-22 08:52:56
# title: Image Processing
# language: Python 3


h,w,n,m = map(int, input().split())
a = []
b = []
for i in range(h):
    a.append(list(map(int, input().split())))

for i in range(n):
    k = list(map(int, input().split()))
    k = k[::-1]
    b.append(k)
    
for i in range(m):
    for j in range(n//2):
        b[j][i], b[n-j-1][i] = b[n-j-1][i], b[j][i]

for  i in range(h-n+1):
    for j in range(w-m+1):
        x = 0
        for u in range(n):
            for v in range(m):
                x += b[u][v] * a[i+u][j+v]
        print(x, end= ' ')
    print()
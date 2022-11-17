# Time: 2022-08-17 18:27:53
# title: Convex Polygon Area
# language: Python 3


for _ in range(int(input())):
    a = list(map(int, input().split()))
    n = a[0]
    b = [(a[i], a[i+1]) for i in range(1, 2*n, 2)]
    area = 0
    for  i in range(n):
        area += b[i][0]*b[(i+1)%n][1] - b[i][1]*b[(i+1)%n][0] 
    print(area/2)

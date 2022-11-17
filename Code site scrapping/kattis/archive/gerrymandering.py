# Time: 2022-08-14 20:39:39
# title: Gerrymandering
# language: Python 3


n , m = map(int, input().split())
d = [[0, 0] for  i in range (m+1)]
for i in range(n):
    x,y,z = map(int, input().split())
    d[x][0] += y
    d[x][1] += z
ax = 0
ay = 0
v = 0
for x,y in d[1:]:
    k = (x+y)//2 + 1
    if x > y:
        print('A', x-k, y)
        ax += x-k
        ay += y
    else:
        print('B', x, y-k)
        ax += x
        ay += y-k
    v+= x+y   
        

e = abs(ax-ay) / v
print(e)
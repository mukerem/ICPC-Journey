# Time: 2022-08-21 08:06:12
# title: Sheba's Amoebas
# language: Python 3


r, c = map(int, input().split())
a= []
for i in range(r):
    a.append(input())
    
b ={}
for i in range(r):
    for j in range(c):
        if a[i][j] == '#':
            x = i*c + j
            b[x]=x
def loop(x,y,z,w):
    if z<0 or w<0 or z>=r or w>=c:
        return
    if a[z][w] == '.': 
        return
    u = x*c +y
    v = z*c + w
    while u!=b[u]:
        u=b[u]
    while v!=b[v]:
        v = b[v]
    b[u]=v
for i in range(r):
    for j in range(c):
        if a[i][j] == '.': 
            continue 
        loop(i,j,i+1,j)
        
        loop(i,j,i-1,j)
        
        loop(i,j,i,j+1)
        
        loop(i,j,i,j-1)
        #loop(i,j,i+1,j+1)
        
        loop(i,j,i+1,j-1)
        
        loop(i,j,i-1,j+1)
        
        loop(i,j,i-1,j-1)
        loop(i,j,i+1,j+1)
        
        
c=set()
for i in b:
    while i!=b[i]:
        i =b[i]
    c.add(b[i])
print(len(c))

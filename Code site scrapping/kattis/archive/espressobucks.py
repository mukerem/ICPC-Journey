# Time: 2022-08-25 16:39:17
# title: Espresso Bucks
# language: Python 3


r, c = map(int, input().split())
a = []
for i in range(r):
    a.append(list(input()))

for i in range(r):
    for j in range(c):
        k = True
        if a[i][j] == '.':
            if i>0 and a[i-1][j] == 'E' or j>0 and a[i][j-1] == 'E' or\
            i<r-1 and a[i+1][j] == 'E' or j<c-1 and a[i][j+1] == 'E':
                k = False
        else:
            k = False
        if k:
            a[i][j] = 'E'
            
for i in a:
    print(''.join(i))
            

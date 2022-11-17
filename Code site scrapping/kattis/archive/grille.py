# Time: 2019-11-21 21:21:21
# title: What's on the Grille?
# language: Python 3


import sys
n = int(input())
a = []
for i in range(n):
    a.append(list(input()))
let = input()+'X'
b = []
for i in range(n):
    b.append([None for j in range(n)])

c = []
for i in range(n):
    c.append([None for j in range(n)])

d = []
for i in range(n):
    d.append([None for j in range(n)])
#print(a,b,c,d)
for i in range(n):
    for j in range(n):
        b[j][n-i-1] = a[i][j]

for i in range(n):
    for j in range(n):
        c[j][n-i-1] = b[i][j]

for i in range(n):
    for j in range(n):
        d[j][n-i-1] = c[i][j]
ans = []
for i in range(n):
    ans.append(['X' for j in range(n)])

count = 0
for i in range(n):
    for j in range(n):
        if a[i][j] == '.':
            if ans[i][j] == 'X':
                ans[i][j] = let[count]
                count+=1
            elif ans[i][j] == let[count]:
                pass
            else:
                print('invalid grille')
                sys.exit(0)

for i in range(n):
    for j in range(n):
        if b[i][j] == '.':
            if ans[i][j] == 'X':
                ans[i][j] = let[count]
                count+=1
            elif ans[i][j] == let[count]:
                pass
            else:
                print('invalid grille')
                sys.exit(0)
for i in range(n):
    for j in range(n):
        if c[i][j] == '.':
            if ans[i][j] == 'X':
                ans[i][j] = let[count]
                count+=1
            elif ans[i][j] == let[count]:
                pass
            else:
                print('invalid grille')
                sys.exit(0)

for i in range(n):
    for j in range(n):
        if d[i][j] == '.':
            if ans[i][j] == 'X':
                ans[i][j] = let[count]
                count+=1
            elif ans[i][j] == let[count]:
                pass
            else:
                print('invalid grille')
                sys.exit(0)
if count == n*n:
    s = ''
    for i in range(n):
        for j in range(n):
            s += ans[i][j]
    print(s)
else:
    print('invalid grille')

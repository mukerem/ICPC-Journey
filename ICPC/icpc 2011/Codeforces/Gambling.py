n= input()
r = raw_input().split()
s = raw_input().split()
a = [int(i) for i in r]
b = [int(i) for i in s]
a.sort()
b.sort()
x = n - 1
y = n - 1
score1 = 0
score2  = 0
#print n,a,b
while(x>=0 or y>=0):
    if y<0:
        score1 += a[x]
        x -= 1
    elif x<0:
        y -= 1
    elif a[x] >= b[y]:
        score1 += a[x]
        x -= 1
    else:
        y -= 1

    if x<0:
        score2 += b[y]
        y -= 1
    elif y<0:
        x -= 1
    elif b[y] >= a[x]:
        score2 += b[y]
        y -= 1
    else:
        x -= 1

print score1 - score2

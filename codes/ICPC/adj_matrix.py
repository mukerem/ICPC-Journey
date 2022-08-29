x,y = [int(i) for i in raw_input().split()]
l = []
for i in range(x):
    l.append([0 for j in range(x)])
for i in range(y):
    a,b = [int(i) for i in raw_input().split()]
    l[a-1][b-1]=1
    l[b-1][a-1]=1
for i in l:
    for j in i:
        print j,
    print
 

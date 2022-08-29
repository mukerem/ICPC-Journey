x, k = raw_input().split()
k = int(k)
y = x[::]
x = list(x)
n = len(x)
for i in range(n):
    for j in range(n):
        
        if abs(i-j)<k:
            continue
        if i<j and x[i]>x[j]:
            x[i],x[j]=x[j],x[i]
        print(i,j, x)
        
if y == ''.join(x):
    print('yes')
else:
    print 'no'
print ''.join(x)

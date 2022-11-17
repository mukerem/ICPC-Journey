n, x = map(int, input().split())
a = [int(i) for i in input().split()]

def f(t):
    sum = 0;
    for i in range(n):
        q = t // a[i]
        while((q+1)*a[i] <= t):q+=1
        sum += q
        #print(q, a[i], t)
    return sum

l = 1
r=1000000000000000000
while(l <= r):
        m = (l+r)//2
        k = f(m)
        
        if(k>x):r = m-1
        elif(k<x):l=m+1
        else:
            break
     
while(1):
     k = f(m)
     if(k<x):m+=1
     else: break

while(1):
     k = f(m-1)
     if(k>=x):m-=1
     else: break
print(m)

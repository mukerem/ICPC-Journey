import math

n,r = raw_input().split()
n = int(n)
r = int(r)
a = raw_input().split()
num = [int(i) for i in a]
cons = 2*r-1
only = []
for i in range(n):
    k = num[i]
    if k == 1:
        only.append(i-r+1)
only.reverse()
ch = 1
only.append(-cons)
# print only
def search(x,l,r):
    if l>r:
        return 0
    m = (l+r)/2
    if only[m] == x:
        return m
    elif only[m]>x:
        if only[m+1]<x:
            return m
        else:
            return search(x,m+1,r)
    else:
        return search(x,l,m-1)
if only[0] + cons < n or only[-2]>0:
    print -1

else:
    k = search(n - cons, 0 , len(only) - 2)
    if k == -1:
        ch = 0
        print -1
    else:
        ans = 0
        check = 0
        while(only[k] > 0):
            k  = search(only[k] - cons, 0 , len(only) - 2)
            if k == check :
                ch = 0
                print -1
                break
            check = k
            ans += 1
        if ch:
            print ans+1

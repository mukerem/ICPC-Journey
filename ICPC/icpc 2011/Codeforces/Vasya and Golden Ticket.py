from math import sqrt
n = input()
l = raw_input()
num = [int(i) for i in l]
total = sum(num)
factor  = set()
for i in range(1,int(sqrt(total))+1):
    if total%i == 0:
        factor.add(i)
        factor.add(total/i)
d = 0
#print total,factor
for i in factor:
    k = 0
    ans = 0
    ch = 1
    c = 0
    while k<len(num):
        ans += num[k]
        #print ans
        k += 1
        if ans>i:
            ch = 0
            break
        elif ans == i:
            ans = 0
            c += 1
    if ch and c>1 and ans == 0:
        d=1
        print 'YES'
        break
        
if not total:
    print 'YES'
elif d == 0:
    print 'NO'

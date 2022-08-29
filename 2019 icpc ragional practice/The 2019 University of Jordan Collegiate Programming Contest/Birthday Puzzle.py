n= input()
a = [int(i) for i in raw_input().split()]
x = 2 ** n
ans = 0
for i in range(1,x):
    k = 0
    z = i
    c = 0
    while z:
        if z&1:
            k = k|a[c]
            #print z,k
        c += 1
        z /= 2
    ans += k
    #print i, k
print ans
    
    

t = input()
for r in range(t):
    n,k = raw_input().split()
    k = int( k )
    n = int( n )
    pro = []
    for i in range(n):
        a,b,c = raw_input().split()
        a = int( a )
        b = int( b )
        c = int( c )
        maxx = max(a,max(b,c))
        pro.append(a)
        pro.append(b)
        pro.append(c)
        pro.remove(maxx)
    pro.sort()
    print sum(pro[:k])        
    

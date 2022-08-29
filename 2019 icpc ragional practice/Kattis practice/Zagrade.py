x = raw_input()
com = []
n = x.count('(')
brace = []
b = 0
for i in x:
    if i == '(':
        com.append(b)
    elif i == ')':
        brace.append((b,com[-1]))
        com.pop()
    b += 1
#print brace
brace.sort()
ans = []
for i in range(1,  2 ** n):
    d = list(x[:])
    z = 0
    while i:
        if i&1:
            t,u=brace[z]
            d[t]=''
            d[u]=''
        
        z += 1
        i /= 2
    e = ''.join(d)
    ans.append(e)
ans.sort()
for i in ans:
    print i
if n == 0:
    print x
        
        
        
    
    
            
    
        
        
    
    

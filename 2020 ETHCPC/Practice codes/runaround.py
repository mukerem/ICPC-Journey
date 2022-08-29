n = 12
ans = []
def check(x):
    l = len(str(x))
    s = {int(i):False for i in str(x)}
    print x, s
    k = int(str(x)[0])
    print k
    y = s.keys()
    for i in range(l):
        k += y[k]
        k %= l
        if s[k]:
            return False
        s[k] = True
    return True
            
while n<= 1000:
    if len(str(n)) != len(set(list(str(n)))):
        n += 1
        continue
    if check(n):
        ans.append(n)
    n += 1
print ans
         
        
    

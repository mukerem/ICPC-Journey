n,p = raw_input().split()
if n == 'E':
    p = p+'0';
    length = 1
    ans = ''
    for i in range(len(p)-1):
        if p[i] != p[i+1]:
            ans += p[i]+str(length)
            length = 1
        else:
            length += 1
    
    print ans
else:
    ans = ''
    for i in range(1,len(p)):
        k = p[i]
        if k>'0' and k<='9':
            ans += p[i-1]*int(k)
    print ans        

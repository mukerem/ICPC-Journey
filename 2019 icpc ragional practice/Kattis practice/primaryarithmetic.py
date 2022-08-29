while True:
    a,b = raw_input().split()
    if a == '0' and b == '0':
        break
    a = a[::-1]
    b = b[::-1]
    ans = 0
    carry = 0
    for i in range(min(len(a), len(b))):
        if carry + int(a[i]) + int(b[i])>9:
            ans += 1
            carry = 1
        else:
            carry = 0
    i = min(len(a), len(b))
    if len(a)<len(b):
        for k in range(i, len(b)):
            if carry + int(b[k])>9:
                ans += 1
            else:
                break
    elif len(a)> len(b):
        for k in range(i, len(a)):
            if carry + int(a[k])>9:
                ans += 1
            else:
                break
    
    if ans == 0:
        print 'No carry operation.'
    elif ans==1:
        print ans, 'carry operation.'
    else:
        print ans, 'carry operations.'

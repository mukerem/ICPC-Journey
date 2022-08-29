t = input()
def correct(a,b,c, op):
    if op == '*':
        return a * b == c
    elif op == '+':
        return a+b == c
    else:
        return a-b == c
for _ in range(t):
    x = raw_input()
    d,c = x.split('=')
    if '*' in d:
        op = '*'
    elif '+' in d:
        op = '+'
    else:
        op = '-'

    if not op == '-':
        a,b = d.split(op)
    else:
        if d.count('-') == 1:
            a,b = d.split('-')
        elif not d[0] == '-':
            a = ''
            for i in range(len(d)):
                if d[i] == '-':
                    b = d[i+1:]
                    break
                a += d[i]
        else:
            
            a = '-'
            for i in range(1,len(d)):
                if d[i] == '-':
                    b = d[i+1:]
                    break
                a += d[i]
    for i in range(10):
        if i == 0:
            if '?' in a and len(a) > 1 and len(set(list(a.replace('0', '?'))))  == 1:
                continue
            if '?' in b and len(b) > 1 and len(set(list(b.replace('0', '?'))))  == 1: 
                continue
            if '?' in c and len(c) > 1 and len(set(list(c.replace('0', '?'))))  == 1: 
                continue
        m = int(a.replace('?', str(i)))
        n = int(b.replace('?', str(i)))
        p = int(c.replace('?', str(i)))
        if correct(m,n,p,op):
            print i
            break
    else:
        print -1
        
            

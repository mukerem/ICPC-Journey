# Time: 2019-11-21 16:03:28
# title: Variable Arithmetic
# language: Python 3


d = {}
while True:
    n = input()
    if n == '0':
        break
    n=n.replace(' ', '')
    if '=' in n:
        x,y = n.split('=')
        d[x] = int(y)
    else:
        
        s = n.split('+')
        ok = False
        summ = 0
        ans = []
        
        for i in s:
            
            if i.isnumeric():
                ok=True
                summ += int(i)
                
            elif i in d:
                summ += d[i]
                ok = True
            else:
                ans.append(i)
        if ok:
            ans.insert(0, str(summ))
        print(' + '.join(ans))

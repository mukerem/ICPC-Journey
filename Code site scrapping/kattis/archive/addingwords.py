# Time: 2019-11-21 16:57:18
# title: Adding Words
# language: Python 3


a = {}
b = {}
while True:
    try:
        n = input()
        if not n:
            continue
        if n == 'clear':
            a.clear()
            b.clear()
            continue
        c =  n.split()
        if c[0]=='def':
            x = c[1]
            y = int(c[2])
            if x in a:
                z = a[x]
                b[z] = None
            a[x] = y
            b[y] = x
        else:
            d = c[1:-1]
            ans = ''
            res = ''
            ok=True
     
            for i in d:
                if i=='+' or i=='-':
                    ans+=i
                    continue
                if i in a:
                    ans+=str(a[i])
                else:
                    ok=False
                    break
            if not ok:
                res = ''.join(d) + " = unknown"
                
            
            if ok:
                f = eval(ans)
                if f in b and b[f]:
                    res = res = ''.join(d) + " = " + str(b[f])
                else:
                    res = ''.join(d) + " = unknown"
            res = res.replace('+', ' + ')
            res = res.replace('-', ' - ')
            print(res)
    except EOFError:
        break

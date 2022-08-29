d = {}
while True:
    n = raw_input()
    if n == '0':
        break
    if '=' in n:
        x,y = n.split('=')
        d[x] = int(y)
    else:
        n.replace(' ', '')
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

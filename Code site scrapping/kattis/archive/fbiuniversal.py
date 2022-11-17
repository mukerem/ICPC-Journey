# Time: 2022-08-22 09:32:31
# title: FBI Universal Control Numbers
# language: Python 3


a = '0123456789ACDEFHJKLMNPRTVWX'
b = {
    'B': '8',
    'G': 'C',
    'I': '1', 
    'O': '0', 
    'Q': '0', 
    'S': '5', 
    'U': 'V', 
    'Y': 'V', 
    'Z': '2'
    }
c = [2,4,5,7,8,10,11,13]
for _ in range(int(input())):
    k, n = input().split()
    for i in b:
        n = n.replace(i, b[i])
    t = 0
    
    for i, v in enumerate(n[:-1]):
        t += a.index(v) * c[i]
    t = t%27
    if(a[t] != n[-1]):
        print(k, 'invalid')
    else:
        t = 0
        for i, v in enumerate(n[:-1]):
            t += a.index(v) * (27**(7-i))
        print(k, t)
    

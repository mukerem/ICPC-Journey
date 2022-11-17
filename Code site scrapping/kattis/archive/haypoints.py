# Time: 2020-12-16 21:31:12
# title: Hay Points
# language: Python 3


m,n = [int(i) for i in input().split()]
a = dict()
for i in range(m):
    x,y = input().split()
    a[x] = int(y)
t = ''
r = []
while 1:
    try:
        
        t = t + ' ' +  input()
        if t[-1] == '.':
            t = t.replace('.', '')
            r.append(t)
            t = ''
    except EOFError:
        for t in r:
            s = t.split()
            tot = 0
            for i in s:
                if i in a:
                    tot += a[i]
            print(tot)
        break
                

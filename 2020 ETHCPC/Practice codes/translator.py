n = int(input())
a = {}
for i in range(n):
    s = raw_input().replace(' ', '').split('=')
    x,y = s
    a[x] = y
x = raw_input()
while 1:
    try:
        x = raw_input().split()
        y = []
        for i in x:
            if i in a:
                y.append(a[i])
            else:
                y.append(i)

 
        f = ' '.join(y)
        f = f.replace('\\n', '')
        print (f.strip())
    except EOFError:
        break

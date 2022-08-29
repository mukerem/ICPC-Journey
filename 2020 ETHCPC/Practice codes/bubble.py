a = {}
while 1:
    s = raw_input()
    if s == '':
        break
    x,y = s.split()
    a[y] = x

while 1:
    try:
        x = raw_input()
        if x in a:
            print a[x]
        else:
            print 'eh'
    except EOFError:
        break

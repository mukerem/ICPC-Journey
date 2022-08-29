t = input()
for r in range(t):
    p,n = raw_input().split()
    p = int( p )
    n = int( n )
    input_boy = []
    input_girl = []
    for i in range(p+1):
        input_boy.append([])
        input_girl.append([])
    for j in range(n):
        b,g = raw_input().split()
        b = int( b )
        g = int( g )
        input_boy[b].append(g)
        input_girl[g].append(b)
    if p >= n*2:
        print p
    else:
        
        boy = []
        girl = []
        for i in input_boy:
            if i:
                i.sort()
                x=i
                boy.append(x)
        for i in input_girl:
            if i:
                i.sort()
                x=i
                girl.append(x)
        total = []
        visit_boy = [[]]
        for i in boy:
            if not i in visit_boy:
                summ = boy.count(i) + (len(i))
                total.append(summ)
                visit_boy.append(i)

        visit_girl = []
        for i in girl:
           if not i in visit_girl:
                summ = girl.count(i) + (len(i))
                total.append(summ)
                visit_girl.append(i)
        total.sort()
        if total:
            print max(p,total[-1])
        else:
            print p
        

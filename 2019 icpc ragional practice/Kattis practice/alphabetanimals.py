s =raw_input()
n = input()
t = []
alp = {chr(i):0 for i in range(97, 123)}
for i in range(n):
    x = raw_input()
    t.append(x)
    alp[x[0]] += 1
y = s[-1]
z=None
for i in t:
    if y == i[0]:
        if i[0] == i[-1]:
            if alp[i[-1]]<2:
                print i+'!'
                break
            else:
                if not z:z=i
        else:
            if not alp[i[-1]]:
                print i+'!'
                break
            else:
                if not z:z=i

else:
    if z:
        print z
    else:
        print '?'
    
    
    



a = [int(i) for i in raw_input().split()]
b = {}
d = []
for i in a:
    
    if i in b:
        pass
    else:
        d.append(i)
    b[i] = a.count(i)
for i in d:
    print i, b[i]

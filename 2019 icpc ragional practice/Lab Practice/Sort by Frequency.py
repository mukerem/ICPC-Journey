x = raw_input()
let = dict()
for i in x:
    if i in let:
        let[i] += 1
    else:
        let[i] = 1


y = [(-j,i) for i,j in let.items()]
y.sort()
s = ''
for i,j in y:
    for k in range(-i):
        s += j
print s
    

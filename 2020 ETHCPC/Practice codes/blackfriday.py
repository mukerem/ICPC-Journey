n = input()
x = [int(i) for i in raw_input().split()]
y = []
for i in range(6, 0, -1):
    y.append((i, x.count(i)))
a = False

for i, j in y:
    if(j == 1):
        index =  i
        a = True
        break
if not a:
    print 'none'
else:
    print x.index(index) + 1

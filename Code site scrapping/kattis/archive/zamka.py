l = input()
d = input()
x = input()
for i in range(l, d+1):
    a = [int (k) for k in str(i)]
    if sum(a) == x:
        print i
        break
    
for i in range(d, l-1, -1):
    a = [int (k) for k in str(i)]
    if sum(a) == x:
        print i
        break

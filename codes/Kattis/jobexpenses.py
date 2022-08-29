n = input()
a = b = 0
x = [int(i) for  i in raw_input().split()]
for i in x:
    if i>0:
        a += i
    else:
        b += i
c = a+b
if c >0:print 0
else:print c

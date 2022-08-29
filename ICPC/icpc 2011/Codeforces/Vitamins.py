n = input()
a = [];b = [];c = []
ab = [];ac =[];bc=[]
abc =[]
for i in range(n):
    p,v = raw_input().split()
    p = int(p)
    if len(v) == 3:
        abc.append(p)
    elif len(v) == 2:
        if v == 'AB' or v == 'BA':
            ab.append(p)
        elif v == 'CB' or v == 'BC':
            bc.append(p)
        else:
            ac.append(p)
    else:
        if v == 'A':
            a.append(p)
        elif v == 'B':
            b.append(p)
        else:
            c.append(p)
c1 = 1000000;c2=1000000;c3=1000000;c4=1000000
c5=1000000;c6=1000000;c7=1000000;c8=1000000

if abc:
    c1 = min(abc)
if a and b and c:
    c2 = min(a) + min(b )+ min(c)
if ab and c:
    c3 = min(c) + min(ab)
if ac and b:
    c4 = min(b) + min(ac)
if bc and a:
    c5 = min(a) + min(bc)
if ab and ac:
    c6 = min(ac) + min(ab)
if ab and bc:
    c7 = min(bc) + min(ab)
if bc and ac:
    c8 = min(bc) + min(ac)

cx = min(min(c1,c2) , min(c3,c4))
cy = min(min(c5,c6), min(c7,c8))
#print a,b,c,ab,ac,bc,abc
#print c1,c2,c3,c4,c5,c6,c7,c8
ans = min(cx,cy)
if ans  == 1000000:
    print -1
else:
    print ans

        

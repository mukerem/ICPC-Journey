order = ['I', 'V', 'X', 'L', 'C']
n = list(input())
d = []
e = []
for i in order[::-1]:
    if i in n:
        if i == 'V':
            e = d
            d = []
            d.append((i, n.count(i)))
        else:
            d.append((i, n.count(i)))

def roman(d):
    k = len(d)
    last = k
    i=0
    while i<k:
            c = i
            while c+1<k and d[c+1][0]!='V' and d[c+1][1] == 1 and c+1<last:
                c += 1
            if c!=i:
                
                last = c
                z = d[i]
                d.pop(i)
                d.insert(c, z)
                i-=1
            i+=1
    return d

ans=''
r = roman(e)
for i,j in r:
    ans += j*i
r = roman(d)
for i,j in r:
    ans += j*i
print(ans)

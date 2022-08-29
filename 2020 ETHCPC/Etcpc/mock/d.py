f=  open('mult.in', 'r')
def maxx(l):
    m = -1
    ind = -1
    for i in range(len(l)):
        if l[i] > m:
            m = l[i]
            ind = i
    return(m, ind)
for i in range(int(f.readline())):
    n,k = [int(j) for j in f.readline().split()]
    a =[int(j) for j in f.readline().split()]
    abc = []
    for j in range(k):
        c,d = maxx(a)
        abc.append(c)
        a[d] = 0
    ans = 1
    for j in abc:
        ans = ans * j
    print(ans)

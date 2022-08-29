sizex={'small': 0, 'medium': 1, 'large': 2}
#f = open("coffee.in", 'r')
#t = int(f.readline())
t = input()
for _ in range(t):
    c,p = [int(i) for i in raw_input().split()]
    k = 100/p
    cof = {}
    for i in range(c):
        n,s,m,l = raw_input().split()
        cof[n]=(int(s), int(m), int(l))
    for i in range(p):
        n,x,y= raw_input().split()
        ans = k + cof[y][sizex[x]]
        if (ans+1)%5 == 0:
            print n, ans+1
        elif (ans-1)%5 == 0:
            print n, ans-1
        else:
            print n, ans  


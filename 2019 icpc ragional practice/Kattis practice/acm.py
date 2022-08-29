ans = 0
pen = 0

d = {}
che = {}
while True:
        x = raw_input()
        if x == '-1':
            break
        t,p, a = x.split()
        t = int(t)
        if p in d:
            if che[p]:
                continue
            if a == 'right':
                ans += 1
                pen += 20 * d[p] + t
                che[p]=1
            else:
                d[p] += 1
                che[p]=0
        else:
            if a == 'right':
                ans += 1
                pen += t
                che[p]=1
            else:
                d[p] = 1
                che[p]= 0
print ans, pen

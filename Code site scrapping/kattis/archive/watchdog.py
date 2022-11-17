# Time: 2022-08-23 17:59:35
# title: Watchdog
# language: Python 3


for _ in range(int(input())):
    s,h = map(int, input().split())
    x = 0
    y = 0
    b = []
    for i in range(h):
        u, v = map(int, input().split())
        b.append((u,v))
        #x += u
        #y += v
    ans = []
    for x in range(1, s):
        for y in range(1, s):
            #x = x // h
            #y = y // h
            if (x,y) in b:
                continue
            a = min(x,y,s-x,s-y)
            for u,v in b:
                d = (u-x) ** 2 + (v-y) ** 2
                if d > a*a:
                    #print('poodle')
                    break
            else:
                #print(x,y)
                ans.append((x, y))
    if ans:
        x,y = min(ans)
        print(x, y)
    else:
        print('poodle')
    

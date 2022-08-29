
n = input()
def x(n):
    ans = []
    c = False
    for i in range(21):
        for aa in [3,6,9]:
            for j in range(21):
                for bb in [2,4,6]:
                    a = aa
                    b = bb
                    z = n - a*i - b*j
                    if z < 0:
                        continue
                    d = 0
                    if z==0: d=0
                    elif z >= 0 and z <= 20:d=1
                    elif z >= 0 and z <= 40 and z%2 == 0: d=2
                    elif z >= 0 and z <= 60 and z%3 == 0: d=3

                    a /= 3
                    if i==0: a=0
                    b /= 2
                    if j==0: b=0
                    if a+b+d > 3:
                        continue
                    if d:z /= d
                    if z>=0 and z<=20:
                            ans = [i,a,j,b,z,d]
                            c = True
                            break
                   
                if c:
                    break
            if c:
                break
        if c:
            break

    if not ans or 3 * ans[0] * ans[1] + 2 * ans[2] * ans[3] + ans[4] * ans[5] != n:
        print 'impossible'
    else:
        for i in range(ans[1]):
            print 'triple',
            print ans[0]
        for i in range(ans[3]):
            print 'double',
            print ans[2]
        for i in range(ans[5]):
            print 'single',
            print ans[4]

for i in range(1,181):
    print i
    x(i)

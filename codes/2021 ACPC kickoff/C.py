
import sys
sys.stdin = open("triangles.in", 'r')
def change(s):
    t = ""
    for i in s:
        t += (5 - len(i)) * '0' + i
    return t
def sortx(x, y):
    if x < y:
        return (x,y)

    return (y,x)
for _ in range(int(input())):
    n = int(input())
    d = dict()
    tot = []
    for i in range(n):
        a = input().split()
        x = change(a[0:3])
        y = change(a[3:6])
        z = change(a[6:9])
        
        t1 = sortx(x, y)
        t2 = sortx(x, z)
        t3 = sortx(z, y)
        tot.append((t1, t2, t3))
        if t1 in d:
            d[t1] += 1
        else:
            d[t1] = 1
        if t2 in d:
            d[t2] += 1
        else:
            d[t2] = 1

        if t3 in d:
            d[t3] += 1
        else:
            d[t3] = 1
    if n == 1:
        print("Yes")
        continue
    for i,j,k in tot:
        if d[i] > 1:
            continue
        if d[j] > 1:
            continue
        if d[k] > 1:
            continue
        print("No")
        break
    else:
        print("Yes")

# Time: 2022-08-18 22:05:31
# title: Touchscreen Keyboard
# language: Python 3


a = ["qwertyuiop", "asdfghjkl", "zxcvbnm"]
def dis(x, y):
    if x == y:
        return 0
    for i, v in enumerate(a):
        if x in v:
            r1 = i
            c1 = v.index(x)
            break
    for i, v in enumerate(a):
         if y in v:
            r2 = i
            c2 = v.index(y)
            break
    d = abs(r1-r2) + abs(c1-c2)
    return d
    
for _ in range(int(input())):
    s, n = input().split()
    n = int(n)
    b = []
    for i in range(n):
        c = input()
        z = 0
        for j,k in zip(c, s):
            z += dis(j, k)
        b.append((z, c))
    b.sort()
    for i,j in b:
        print(j, i)

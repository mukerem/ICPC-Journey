# Time: 2022-08-24 19:54:22
# title: Height Ordering
# language: Python 3


for  _ in range(int(input())):
    a = list(map(int, input().split()))
    k = a[0]
    a = a[1:]
    
    t = 0
    for i in range(20):
        s = min(a[i:])
        j = a.index(s)
        a.pop(j)
        a.insert(i, s)
        t += j-i
    print(k, t)
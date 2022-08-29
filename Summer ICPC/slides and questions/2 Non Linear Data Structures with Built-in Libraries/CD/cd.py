while 1:
    n,m = [int(i) for i in raw_input().split()]
    if (not n or not m):
        break
    
    a = set()
    b = set()
    for j in range(n):
        k = input()
        a.add(k)
    for j in range(m):
        k = input()
        b.add(k)
    c = a - b
    print (n + m - len(c))/2


q = input()
def day(k, i):
    if i == k:
        return 1
    return day(x[k], i)+1
for _ in range(q):
    n = input()
    x = [int(i) for i in raw_input().split()]
    x.insert(0,0)
    for i in range(1, n+1):
        print day(x[i], i),
    print
        

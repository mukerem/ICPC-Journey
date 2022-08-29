q = input()
def cons(x, n):
    x.sort()
    for i in range(n-1):
        if x[i+1] - x[i] == 1:
            return 2
    return 1
for _ in range(q):
    n = input()
    x = [int(i) for i in raw_input().split()]
    print cons(x, n)

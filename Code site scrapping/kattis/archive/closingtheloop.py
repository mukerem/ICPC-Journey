# Time: 2022-08-15 23:19:31
# title: Closing the Loop
# language: Python 3


for _ in range(int(input())):
    r = []
    b = []
    n = int(input())
    a = input().split()
    for i in a:
        if i[-1] == 'R':
            r.append(int(i[:-1]))
        else:
            b.append(int(i[:-1]))
    r.sort(reverse=True)
    b.sort(reverse=True)
    x = min(len(r), len(b))
    if x == 0:
        d = 0
    else:
        a = sum(b[:x])
        a += sum(r[:x])
        d  = a - 2*x
    print(f'Case #{_+1}: {d}')
# Time: 2022-08-26 22:05:57
# title: Ceiling Function
# language: Python 3




n, k = map(int, input().split())
a = []
b = set()
for _ in range(n):
    x = list(map(int, input().split()))
    y = x[:]
    y.sort()
    z = []
    for i in x:
        z.append(y.index(i))
    x = z
    y = [x[0], [], []]
    for i in x[1:]:
        r = y
        while r:
            if i > r[0]:
                r = r[2]
            else:
                r = r[1]
        r.extend([i, [], []])
    b.add(str(y))
print(len(b))

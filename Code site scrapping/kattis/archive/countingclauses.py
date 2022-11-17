# Time: 2022-08-21 12:33:22
# title: Counting Clauses
# language: Python 3


n, m = map(int, input().split())
a = set()
c = 0
for i in range(n):
    b = tuple(map(int, input().split()))
    for j in range(1, m+1):
        if j in b and -j in b:
            c += 1
            break
    b=tuple(sorted(list(b)))
    a.add(b)
x = len(a) - c
y = m*(m-1)*(m-2)//6
y = y*8
if n < 8:
    print('unsatisfactory')

else:
    print('satisfactory')

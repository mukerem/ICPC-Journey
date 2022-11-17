# Time: 2020-12-16 20:20:50
# title: Exam Redistribution
# language: Python 3


n = int(input())
a = [int(i) for i in input().split()]
b= [(a[i], i+1) for i in range(n)]
b.sort(reverse=True)
s = sum(i[0] for i in b[1:])
if b[0][0] > s:
    print('impossible')
else:
    for i in b:
        print(i[1], end=' ')

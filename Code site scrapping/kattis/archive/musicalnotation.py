# Time: 2022-08-18 12:03:05
# title: Musical Notation
# language: Python 3


n = int(input())
x = [chr(i) for i in range(97, 104)] + [chr(i) for i in range(65, 72)]
x.reverse()

#a = {i:[' ' for j in range(1000)] for i in x}
a = {}
for i in x:
    if i in 'FDBgea':
        a[i] = ['-' for j in range(1000)]
    else:
        a[i] = [' ' for j in range(1000)]

s = input().split()
k = 0
for i in s:
    if len(i) == 1:
        a[i][k] = '*'
        k += 2
    else:
        z = i[0]
        y = int(i[1:])
        for j in range(y):
            a[z][k+j] = '*'
        k += y + 1
for i in x:
    print(f'{i}:', ''.join(a[i][:k-1]))
            

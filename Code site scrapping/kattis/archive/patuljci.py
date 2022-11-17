# Time: 2022-08-16 21:53:53
# title: Patuljci
# language: Python 3


a = []
for i in range(9):
    a.append(int(input()))
s = sum(a)
k = s - 100
for i in range(9):
    if a[i] >= k:
        continue
    for j in range(i+1, 9):
        if a[i] + a[j] == k:
            a.pop(j)
            a.pop(i)
            break
    if len(a) == 7:
        break
for i in a:
    print(i)
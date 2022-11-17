# Time: 2022-08-16 22:42:40
# title: Kitten on a Tree
# language: Python 3


a = {}
k = int(input())
main = -1
while 1:
    s = input()
    if s == '-1':
        break
    b = list(map(int, s.split()))
    r = b[0]
    c = b[1:]
    for i in c:
        a[i] = r
    if main == -1:
        main = r

while k != main:
    print(k, end = ' ')
    k = a[k]
print(main)

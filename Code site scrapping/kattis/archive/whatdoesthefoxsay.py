# Time: 2022-08-25 20:57:26
# title: What does the fox say?
# language: Python 3


for _ in range(int(input())):
    a = input().split()
    while 1:
        x = input()
        if x == 'what does the fox say?':
            break
        y, p , z = x.split()
        while z in a:
            a.remove(z)
    print(' '.join(a))
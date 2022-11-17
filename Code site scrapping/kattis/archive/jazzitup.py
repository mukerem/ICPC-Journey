# Time: 2022-08-24 20:04:23
# title: Jazz it Up!
# language: Python 3


a = []
for i in range(2, 320):
    for j in range(2, i):
        if i % j == 0:
            break
    else:
        a.append(i*i)

def jazz(n):
    for m in range(2, n):
        x = m * n
        for i in a:
            if i > x:
                print(m)
                return
            if x % i == 0:
                break
        else:
            print(m)
            return
n = int(input())
jazz(n)
# Time: 2022-08-17 22:02:13
# title: Math Homework
# language: Python 3


a,b,c,d = map(int, input().split())
f = False
for i in range(d//a + 1):
    for j in range(d//b + 1):
        for k in range(d//c + 1):
            if i*a + j*b + k*c == d:
                print(i, j, k)
                f = True
if f == False:
    print('impossible')
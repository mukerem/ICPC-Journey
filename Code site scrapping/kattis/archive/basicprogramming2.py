# Time: 2021-01-22 15:32:02
# title: Basic Programming 2
# language: Python 3


n,t = [int(i) for i in input().split()]
a = [int(i) for i in input().split()]
a.sort()

if t == 1:
    x = [False for i in range(7778)]
    for i in a:
        if i < 7778: x[i] = True
        else:break
    for i in a:
        b = 7777 - i
        if b < 0:
            print("No")
            break
        if x[b] == True:
            print("Yes")
            break
    else:
        print("No")
          
elif t == 2:
    for i in range(n-1):
        if a[i] == a[i+1]:
            print("Contains duplicate")
            break
    else:
        print("Unique")
elif t == 3:
    if a[0] == a[n//2]:
        print(a[0])
    else:
        print(-1)
elif t == 4:
    if n%2 == 1:
        print(a[n//2])
    else:
        print(a[(n-1)//2], a[n//2])
elif t == 5:
    for i in a:
        if i <= 999 and i>= 100:
            print(i, end= ' ')
        elif i > 999:
            break

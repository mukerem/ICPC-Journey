# Time: 2022-08-14 17:14:42
# title: Odd Gnome
# language: Python 3


for _ in range(int(input())):
    a = list(map(int, input().split()))
    g = a[0]
    a = a[1:]
    ans = 10000000
    d = []
    
    for i in range(1, g-1):
        if (a[i-1] < a[i] and a[i] > a[i+1] or a[i-1] > a[i] and a[i] < a[i+1]) \
           and a[i-1] < a[i+1]:
            print(i+1)
            break

# Time: 2020-12-16 20:56:46
# title: A Towering Problem
# language: Python 3


a = [int(i) for i in input().split()]
x = a[6]
y = a[7]
a = a[:6]
ax = []
ay = []
for i in a:
    for j in a:
        if i == j:
            continue
        if a.count(x - i - j) == 1:
            
            ax = [i, j, x-i-j]
            if(len(set(ax)) !=3 ):continue
            for k in a:
                if not k in ax:
                    ay.append(k)
            ax.sort(reverse=True)
            ay.sort(reverse=True)
            c = ax + ay
            for k in c:
                print(k, end=' ')
            exit(0)

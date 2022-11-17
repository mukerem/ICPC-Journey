# Time: 2022-08-14 16:15:38
# title: School Spirit
# language: Python 3


n = int(input())
a = []
c = d = 0
for i in range(n):
    b = int(input())
    c += b *   ((0.8)**i * (n-i-1) + (0.8) ** (i-1) * i)
    d += b * (0.8)**i
ave2 = c / n
ave = d / 5
print(ave)
print(ave2/5)

    

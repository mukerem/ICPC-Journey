# Time: 2021-09-20 13:40:27
# title: The Calculus of Ada
# language: Python 3


z = [int(i) for i in input().split()]
n = z[0]
a = z[1:]
x = [a[-1]]
c = 0
while 1:
      c += 1
      z = []
      for i in range(len(a) - 1):
            z.append(a[i+1] - a[i])
      if len(set(z)) == 1:
            x.append(z[0])
            break
      a = z
      x.append(a[-1])
      
print(c, sum(x))

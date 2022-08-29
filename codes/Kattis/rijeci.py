n = int(input())
a = [0, 1]
for i in range(n-1):
      a.append(a[-1] + a[-2])
print(a[-2], a[-1])

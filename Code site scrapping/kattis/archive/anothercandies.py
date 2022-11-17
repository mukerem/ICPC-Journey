# Time: 2021-09-20 18:36:24
# title: Another Candies
# language: Python 3


t = int(input())
for _ in range(t):
      x = input()
      n = int(input())
      a = []
      for i in range(n):
            a.append(int(input()))
      if sum(a) % n == 0:
            print("YES")
      else:
            print("NO")

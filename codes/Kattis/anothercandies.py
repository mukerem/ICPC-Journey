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

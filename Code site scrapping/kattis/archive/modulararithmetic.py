# Time: 2021-09-20 18:33:00
# title: Modular Arithmetic
# language: Python 3


def egcd(a,b):
      if b == 0:
            return (1,0,a)
      else:
            x,y,g = egcd(b,a%b)
            return (y, x - (a//b) * y, g)

def modinverse(a,m):
      x,y,g = egcd(a,m)
      if g != 1:
            return -1
      else:
            return x%m
      
while 1:
      n,t = [int(i) for i in input().split()]
      if n+t == 0:
            break
      for i in range(t):
            a,b,c = input().split()
            a = int(a)
            c = int(c)
            if b == '*':
                  print((a*c)%n)
            elif b == '+':
                  print((a+c)%n)
            elif b == '-':
                  print((a-c)%n)
            else:
                  z = modinverse(c, n)
                  if z == -1:
                        print(-1)
                  else:
                        print((z * a)%n)

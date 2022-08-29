def egcd(a,b):
      if b == 0:
            return (1,0,a)
      t = egcd(b,a%b)
      return (y, x - (a//b) * y, a)

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
                  z = modinverse(a, n)
                  print((z * c)%n)

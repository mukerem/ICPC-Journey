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
import sys
#print(egcd(100, -14))
b,d,a = [int(i) for i in input().split()]
maxx = len(str(a))

if int(maxx*'1')*d > a:
      maxx -= 1
num = 10 ** maxx * 10
ans = 0
for n in range(maxx, 0,-1):
      num = num // 10
      h = ((int(n*'1')*d))%b
      '''
      r,t,g = egcd(num, b)
      if g == -1:
            continue
      if h%g != 0:
            continue
      if r>0 or t>0:
            continue
      #x = r * (h//g)
      print(r,t,g,h,num)
      print(n)
      break
      #x = modinverse(num, )
      '''
      #print((int(n*'1')*d), (int(n*'1')*d)%b, h)
      # o = (num*x) % b + h
      # -h = (num*x) % b
      # -h = num*x + b*y
      r,t,g = egcd(num, b)
      if g == -1 or h % g != 0:
            continue
      print(n)
      print(r,t,g,h,n,num)
      break
      r = r * (h//g)
      t = t * (h//g)
      
      '''
      for j in range(1,h):
            sub = j-h
            r,t,g = egcd(num, abs(sub))
            if j%g:
                  #print('///')
                  continue
            t *= -1
            mul = j//g
            r = r*mul
            t = t*mul
            print(num, sub, r,t, '-------',g, h)
            if (t-1) * g % num:
                  continue
            
            k = (t-1) * g // num
            r = r + k *(sub) // g
            print('***', r,t)
            r = r%b
            if r * num <= a:
                  ans = n
                  
                  print('*********************' , ans)
                  sys.exit(0)
print(0)
'''

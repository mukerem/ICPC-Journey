r,c = [int(i) for i in input().split()]
from math import log, ceil
if r%2 and c%2:
      p = c//2 + 1
      i = r//2 + 1
      j = c//2 + 1
      s = 0
      t = r*c
      while t > 1:
            s += 1
            t = int(ceil(t/c))
      print(p, i, j, s)
elif r%2 == 0 and c%2:
      p = 1
      i = 1
      j = 1
      s = 0
      t = r*c
      while t > 1:
            s += 1
            t = int(ceil(t/c))
      print(p, i, j, s)

elif r%2 == 0 and c%2 == 0:
      if 2*c - 2 == r:
            p = 1
            i = 1
            j = 1
            s = 0
            t = r*c
            while t > 1:
                  s += 1
                  t = int(ceil(t/c))
            print(p, i, j, s)
      else:
            # end in this position
            
elif r%2 and c%2 == 0:
      p = c//2
      i = r//2 
      j = c//2
      s = 0
      t = r*c
      while t > 1:
            s += 1
            t = int(ceil(t/c))
      print(p, i, j, s)

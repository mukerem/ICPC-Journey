
r = 0
c = 0
def store(h):
      aa = []
      s = 0
      for i in range(r):
            t = []
            for j in range(c):
                  t.append(h[s])
                  s += 1
            aa.append(t)
      return aa

def iterate(ran, shift):
      shift = shift * r
      #print(shift, '***')
      a = store([i+1 for i in range(r*c)])
      
      def find(n):
            for i in range(r):
                  for j in range(c):
                        if a[i][j] == n:
                              return i,j

      def pr():
            for i in a:
                  print(i)
            print()
      #pr()
      index = []
      iter = 1

      while iter < 100:
            iter += 1
            x,y = find(ran)
            
            

            res = [a[i][y] for i in range(r)]
            b = []
            
            for i in range(c):
                  if i == y:
                        continue
                  for j in range(r):
                        
                        b.append(a[j][i])
            d = b[:shift] + res + b[shift:]
                  
            a = store(d)
            #pr()

            index.append((x,y))
            if iter > 5 and len(set(index[-5:])) == 1:
                  #print(index)
                  #print(index.index(index[-1]) + 1)
                  #print(index[-1])
                  #break
                  return index[-1]

'''
x = set()
r = 19
c = 12
for k in range(1, r*c + 1):
                        ans = iterate(k, 5)
                        x.add(ans)
                        #print(i, shift, ' ==> ', ans)
if len(x) == 1:
                        print((5, list(x)[0]))

r = 1
c = 2
'''
from random import randint
for i in range(10):
      r += 2
      c = 0
      for j in range(10):
            c += 2
            anss = []
            for shift in range(c):
                  x = set()
                  for k in range(1, r*c + 1):
                        ans = iterate(k, shift)
                        x.add(ans)
                        #print(i, shift, ' ==> ', ans)
                  if len(x) == 1:
                        anss.append((shift, list(x)[0]))
            cx = r//2
            cy = c//2
            cx2 = cx - 1
            cy2 = cy - 1
            minn = r*c
            px = 0
            py = 0
            sh = 0
            for z,t in anss:
                  k,h = t
                  
                  #if minn > min(abs(cx-k) + abs(cy - h), abs(cx2-k) + abs(cy - h), abs(cx-k) + abs(cy2 - h), abs(cx2-k) + abs(cy2 - h)) :
                   #     minn = min(abs(cx-k) + abs(cy - h), abs(cx2-k) + abs(cy - h), abs(cx-k) + abs(cy2 - h), abs(cx2-k) + abs(cy2 - h))
                  #if minn > min(abs(cx-k) + abs(cy - h), abs(cx2-k) + abs(cy - h)) :
                   #     minn = min(abs(cx-k) + abs(cy - h), abs(cx2-k) + abs(cy - h))
                  if minn > min(abs(cx-k) + abs(cy - h), abs(cx2-k) + abs(cy - h), abs(cx-k) + abs(cy2 - h), abs(cx2-k) + abs(cy2 - h)) :
                        minn = min(abs(cx-k) + abs(cy - h), abs(cx2-k) + abs(cy - h), abs(cx-k) + abs(cy2 - h), abs(cx2-k) + abs(cy2 - h))
                           
                        px = k
                        py = h
                        sh = z
            
            print(r, c, minn, (px, py), sh)

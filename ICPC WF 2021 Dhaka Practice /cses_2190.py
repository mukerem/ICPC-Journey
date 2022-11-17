def onLine(t,  p):
   x,y = p
   a,c = t
   a,b = a
   c,d = c
   if min(a, c) <= x <= max(a, c) and\
      min(b, d) <= y <= max(b, d):
      return True

   return False


def direction(a, b, c):
   val = (b[1]-a[1])*(c[0]-b[0])-(b[0]-a[0])*(c[1]-b[1])
   
   if (val == 0):
      return 0
   elif(val < 0):
      return 2
   return 1

def isIntersect( l1,  l2):
   if l1[0] in l2 or l1[1] in l2:
        return True
   dir1 = direction(l1[0], l1[1], l2[0])
   dir2 = direction(l1[0], l1[1], l2[1])
   dir3 = direction(l2[0], l2[1], l1[0])
   dir4 = direction(l2[0], l2[1], l1[1])

   if(dir1 != dir2 and dir3 != dir4):
      return True

   if(dir1==0 and onLine(l1, l2[0])):
       return True

   if(dir2==0 and onLine(l1, l2[1])):
       return True

   if(dir3==0 and onLine(l2, l1[0])):
       return True

   if(dir4==0 and onLine(l2, l1[1])):
       return True

   return False
n = int(input())
for i in range(n):
    x1,y1,x2,y2,x3,y3,x4,y4 = map(int, input().split())

    a = ((x1,y1), (x2,y2))
    b = ((x3,y3), (x4,y4))
    if(isIntersect(a,b)):
        print('YES')
    else:
        print('NO')
    

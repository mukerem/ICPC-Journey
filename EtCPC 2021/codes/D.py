from math import sqrt, atan, atan2, degrees
import sys
sys.stdin = open("matheo.in", "r")
def intersection(m,b,r):
      d = sqrt(4*m*m*b*b - 4*(1+m*m)*(b*b-r*r))
      x1 = (2*m*b + d) / (2*(1+m*m))
      x2 = (2*m*b - d) / (2*(1+m*m))
      y1 = m*x1 + b
      y2 = m*x2 + b
      print('*********', m,b,x1)
      return (x1, y1, x2,y2)

def points(x1,y1,x2,y2,r):
      if x1 == x2:
            y1 = sqrt(r*r - x1*x1)
            y2 = -sqrt(r*r - x1*x1)
            return (x1,y1,x2,y2)
      else:
           m = (y2-y1)/(x2-x1)
           b = y1 - m*x1
           return intersection(m,b,r)

def ang(x):
      if x<0:
            return x+360
      return x

for _ in range(int(input())):
      r = int(input())
      x1,y1,x2,y2 = [int(i) for i in input().split()]
      ans1 = points(x1,y1,x2,y2,r )
      
      x1,y1,x2,y2 = [int(i) for i in input().split()]
      ans2 = points(x1,y1,x2,y2,r )

      angle1 = ang(degrees(atan2(ans1[1], ans1[0])))
      angle2 = ang(degrees(atan2(ans1[3], ans1[2])))
      angle3 = ang(degrees(atan2(ans2[1], ans2[0])))
      angle4 = ang(degrees(atan2(ans2[3], ans2[2])))
      print(angle1, angle2, angle3, angle4)
      print(ans1, ans2)
      

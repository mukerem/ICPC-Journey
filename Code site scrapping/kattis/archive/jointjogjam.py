# Time: 2022-08-15 20:38:46
# title: Joint Jog Jam
# language: Python 3


a,b,c,d,e,f,g,h = map(int, input().split())
def dis(x,y,u,v):
    from math import sqrt
    z = (x-u) ** 2 + (y - v) ** 2
    return sqrt(z)

q = dis(a,b,c,d)
p = dis(e,f,g,h)
print(max(p, q))

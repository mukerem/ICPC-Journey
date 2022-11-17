# Time: 2022-08-17 21:07:31
# title: Vauvau
# language: Python 3


a,b,c,d = map(int, input().split())
def e(m):
    ans = 0
    x = a+b
    y = m%x
    if y != 0 and y<=a:
            ans += 1
    x = c+d
    y = m%x
    if y != 0 and  y<=c:
            ans += 1
    if ans == 0:
        return 'none'
    elif ans == 1:
        return 'one'
    return 'both'

x,y,z = map(int, input().split())
print(e(x))
print(e(y))
print(e(z))


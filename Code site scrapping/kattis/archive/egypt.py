# Time: 2022-08-23 21:43:59
# title: Egypt
# language: Python 3


while 2:
    a,b,c=  map(int, input().split())
    if a+b+c==0:
        break
    
    a,b,c = sorted([a,b,c])
    if a*a + b*b == c*c:
        print('right')
    else:
        print('wrong')
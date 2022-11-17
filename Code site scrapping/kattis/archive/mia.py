# Time: 2022-08-18 12:19:50
# title: Mia
# language: Python 3


while 1:
    a,b,c,d = input().split()
    if a+b+c+d == '0000':
        break
    x = a+b if a>b else b+a
    y = c+d if c>d else d+c
    order = ['21', '66', '55', '44', '33', '22', '11']
    if x in order:
        u = order.index(x)
    else:
        u = 100 - int(x)
    
    if y in order:
        v = order.index(y)
    else:
        v = 100 - int(y)
        
    if u == v:
        print('Tie.')
    elif u < v:
        print('Player 1 wins.')
    else:
        print('Player 2 wins.')
    
        
        
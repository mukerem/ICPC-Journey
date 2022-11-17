# Time: 2022-08-13 22:44:47
# title: Ultimate Binary Watch
# language: Python 3


a = input()
b = []
for i in a:
    c = bin(int(i))[2:]
    d = []
    c = '0' * (4-len(c)) + c
    for idx, j in enumerate(c):
        if j == '1':
            d.append(idx)
    b.append(d)
#print(b)
for i in range(4):
    if i in b[0]:print('*', end='')
    else:print('.', end='')
    
    if i in b[1]:print(' *', end='')
    else:print(' .', end='')
    
    if i in b[2]:print('   *', end='')
    else:print('   .', end='')
    
    if i in b[3]:print(' *')
    else:print(' .')

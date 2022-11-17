d = ''
while 1:
    try:
        s = input()
        d = ''
        for i in s:
            b = ord(i)
            b = bin(b)[3:]
            d += b
        print(d.count('1'), d.count('0'))
        if d.count('1') % 2 == 1 or d.count('0') % 2 == 1:
            print('trapped')
        else:
            print('free')
                
    except EOFError:
        break

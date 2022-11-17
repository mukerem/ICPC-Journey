# Time: 2022-08-16 21:48:47
# title: Pervasive Heart Monitor
# language: Python 3


while 1:
    try:
        s = input().split()
        #print(s)
        a = []
        m = []
        for i in s:
            if  i.isalpha():
                m.append(i)
            else:
                a.append(float(i))
        av = sum(a) / len(a)
        t = ' '.join(m)
        print(f'{av} {t}')
    
    except:
        break
# Time: 2020-12-15 20:30:40
# title: Soundex
# language: Python 3


a = {
     1:['B','F','P','V'],
     2:['C','G','J', 'K','Q','S','X','Z'],
     3: ['D', 'T'],
     4: ['L'],
     5:['M', 'N'],
     6:['R']
    }
b = {}
for i in a:
    for j in a[i]:
        b[j] = str(i)
        
while 1:
    try:
        x = input()
        c = ''
        for i in x:
            if i in b:
                c += a[int(b[i])][0]
            else:
                c += i
        
        x = c
        y = x[0]
        for i in range(1, len(x)):
            if x[i] == x[i-1]:
                pass
            else:
                y += x[i]
        ans = ''
        for i in y:
            if i in b:
                ans += b[i]
        print(ans)
    except EOFError:
        break

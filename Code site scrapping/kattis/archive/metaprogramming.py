# Time: 2022-08-19 12:21:56
# title: Metaprogramming
# language: Python 3


a = {}
while 1:
    try:
        s = input().split()
        if s[0] == 'define':
            a[s[2]] = s[1]
        else:
            x,y,z = s[1:]
            if y == '=':
                y = '=='
            if x in a and z in a:
                k = eval(f'{a[x]} {y} {a[z]}')
                if k == 1:
                    ans = 'true'
                else:
                    ans = 'false'
                print(ans)
            else:
                print('undefined')
    except:
        break
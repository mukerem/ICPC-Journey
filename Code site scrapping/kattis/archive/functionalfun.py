# Time: 2022-08-18 15:59:47
# title: Functional Fun
# language: Python 3


while 1:
    try:
        domain = input().split()[1:]
        codomain = input().split()[1:]
        n = int(input())
        a = []
        c = []
        d = []
        inj = True
        ser = True
        fun = True
        for i in range(n):
            s = input()
            s = s.replace(' ', '')
            x, y = s.split('->')
            if y in d:
                inj = False
            d.append(y)
            if x in c:
                fun = False
            c.append(x)
            
        d = list(set(d))
        if sorted(codomain) != sorted(d):
            ser = False
            
        if not fun:
            print('not a function')
        elif inj and ser:
            print('bijective')
        elif inj:
            print('injective')
        elif ser:
            print('surjective')
        else:
            print('neither injective nor surjective')
    except EOFError:
        break

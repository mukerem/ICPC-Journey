# Time: 2022-08-18 23:27:29
# title: Saving Daylight
# language: Python 3


while 1:
    try:
        a,b,c,d,e = input().split()
        u,v = map(int, d.split(':'))
        x,y = map(int, e.split(':'))
        r = x-u
        s = y-v
        if s<0:
            r -= 1
            s += 60
        print(f'{a} {b} {c} {r} hours {s} minutes')
        
    except EOFError:
        break
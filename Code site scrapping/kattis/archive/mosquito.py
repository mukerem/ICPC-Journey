# Time: 2022-08-15 20:13:06
# title: Mosquito Multiplication
# language: Python 3


while 1:
    try:
        m,p,l,e,r,s,n = map(int, input().split())
        for i in range(n):
            a = m * e
            m = p // s
            p = l // r
            l = a
        print(m)
    except:
        break
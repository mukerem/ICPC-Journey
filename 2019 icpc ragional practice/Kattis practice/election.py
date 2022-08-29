for _ in range(int(input())):
    n,v1, v2, w = [int(k) for k in input().split()]
    b = n - v2
    a  = n - (v1+v2)
    if 100.0*b/n<=50:
        print('RECOUNT!')
    elif 100.0*v1/n>=50 and (v1*100.0 + 50.0*a)/n>w:
        print('GET A CRATE OF CHAMPAGNE FROM THE BASEMENT!')
    else:
        print('PATIENCE, EVERYONE!')

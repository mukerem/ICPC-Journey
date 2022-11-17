# Time: 2019-11-17 21:25:02
# title: Matrix Inverse
# language: Python 3


k = 1
while True:
    try:
        a,b = [int(i) for i in input().split()]
        c,d = [int(i) for i in input().split()]
        x = input()
        det = a*d - b*c
        print("Case %d:"%k)
        print(d//det, -b//det)
        print(-c//det, a//det)
        k += 1
    except EOFError:
        break

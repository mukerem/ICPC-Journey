# Time: 2022-08-26 09:49:46
# title: Bishops
# language: Python 3


while 1:
    try:
        n = int(input())
        if n == 1:
            print(1)
            continue
        a = n - 1
        print(2 * a)
    except:
        break
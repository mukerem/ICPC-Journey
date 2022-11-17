# Time: 2022-08-23 21:46:21
# title: Sum of the Others
# language: Python 3


while 1:
    try:
        a = list(map(int, input().split()))
        b = sum(a)
        for i in a:
            if 2*i == b:
                print(i)
                break
    except:
        break
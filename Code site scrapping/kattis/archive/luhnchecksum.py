# Time: 2022-08-14 17:56:41
# title: Luhn's Checksum Algorithm
# language: Python 3


for _ in range(int(input())):
    a = list(input())
    n = len(a)
    s = 0
    a = a[::-1]
    for i in range(1, n, 2):
        c = 2 * int(a[i])
        if c > 9:
            c = 1 + c%10
        s += c
    
    for i in range(0, n, 2):
        c = int(a[i])
        s += c
    if(s%10 == 0):
        print('PASS')
    else:
        print('FAIL')
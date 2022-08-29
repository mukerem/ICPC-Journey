while True:
    a = input()
    if a == -1:
        break
    ans = ''
    while a>0:
        s = a%26
        if s == 0:
            s = 26
            a -= 1
        ans = chr(s+96) + ans
        a = a/26
    print ans

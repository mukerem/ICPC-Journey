
try:
    while 1:
        a = list(raw_input())
        b = list(set(a))
        b.sort()
        if a != b:
            print 0
            continue
        tot = 0
        power = 1
        for i in a[::-1]:
            tot += (ord(i) - 96) * power
            power *= 26
        print tot
        minus = 0
        if a[0] != 'a':
            a = [chr(ord(a[0]) - 1)] + a
        l = len(a) - 2
        
        for i in a[:-1]:
            c = (ord(i) - 96)
            minus += c * int(pow(26, l))
            l -= 1
        print a, minus
        print tot - minus
except EOFError:
    pass

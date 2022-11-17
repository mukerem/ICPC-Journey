for _ in range(int(input())):
    n = int(input())
    s = input()
    a = []
    b = ''
    s = s.replace('00', 'a')
    s = s.replace('0', 'b')
    i = 0
    while i<len(s)-2:
        if s[i+1] == 'a':
            a.append(['j', 't'][s[i] == '2'])
            i += 2
        elif s[i+2] == 'b':
            a.append(chr(96 + int(s[i:i+2])))
            i += 3
        else:
            a.append(chr(96 + int(s[i])))
            i += 1
    if i<len(s) and s[-1] == 'a':
        a.append(['j', 't'][s[i] == '2'])
    else:
        if i<len(s):
            a.append(chr(96 + int(s[i])))
        i += 1
        if i<len(s):
            a.append(chr(96 + int(s[i])))

    print(''.join(a))

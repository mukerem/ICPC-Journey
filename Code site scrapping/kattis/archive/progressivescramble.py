# Time: 2022-08-18 23:41:01
# title: Progressive Scramble
# language: Python 3


for _ in range(int(input())):
    s = input()
    if s[0] == 'e':
        s = s[2:]
        a = []
        for i in s:
            if i == ' ':
                a.append(0)
            else:
                a.append(ord(i)-96)
        for i in range(1, len(a)):
            a[i] += a[i-1]
            a[i] %= 27
        s = ''
        for i in a:
            if i == 0:
                s += ' '
            else:
                s += chr(96+i)
        print(s)
    else:
        s = s[2:]
        a = []
        for i in s:
            if i == ' ':
                a.append(0)
            else:
                a.append(ord(i)-96)
        t = a[0]
        for i in range(1, len(a)):
            a[i] = a[i] -t
            a[i] %= 27
            t += a[i]
        s = ''
        for i in a:
            if i == 0:
                s += ' '
            else:
                s += chr(96+i)
        print(s)

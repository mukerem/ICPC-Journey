# Time: 2022-08-13 12:13:23
# title: SMIL
# language: Python 3


s = input()
a = [':)', ';)', ':-)', ';-)']
p = 0
while s:
    maxx = 1000000
    for i in a:
        if i in s:
            id = s.index(i)
            maxx = min(maxx, id)
    if maxx == 1000000:
        break
    print(maxx + p)
    for i in a:
        if s[maxx: maxx + len(i)] == i:
            s = s[maxx+len(i):]
            p += maxx + len(i)
            break
    
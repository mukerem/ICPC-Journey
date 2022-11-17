# Time: 2022-08-24 15:47:40
# title: Pig Latin
# language: Python 3


def b(a):
    if a[0] in 'aeiouy':
        return a + 'yay'
    x = ''
    for idx, i in enumerate(a):
        if i in 'aeiouy':
            return a[idx:] + a[:idx] + 'ay'
while 1:
    try:
        s = input().split()
        for i in s:
            print(b(i), end = ' ')
        print()
    except:
        break
while True:
    x = raw_input()
    if x == '#':
        print '#'
        break
    for i in x.split():
        if i.lower() == 'eric' or i.lower() == 'blow' or i.lower() == 'AMAGBEGNON'.lower():
            print i.upper(),
        elif not i[-1].isalpha() and (i[:-1].lower() == 'eric' or i[:-1].lower() == 'blow' or i[:-1].lower() == 'AMAGBEGNON'.lower()):
            print i[:-1].upper() + i[-1],
        else:
            print i,

    print

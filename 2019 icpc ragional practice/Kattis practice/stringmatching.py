while True:
    try:
        p = input()
        t = input()
        c = -1
        while p in t:
            c += t.index(p)+1
            print(c, end=' ')
            t = t[c+1:]
        print()
    except EOFError:
        break

word = []
maxx = -1
while True:
    try:
        x = input()
        if x:
            word.append(x[::-1])
            maxx = max(maxx, len(x))
        else:
            word.sort()
            for i in word:
                print (i[::-1].rjust(maxx))
            print()
            word = []
            maxx = -1
    except EOFError:
        word.sort()
        for i in word:
            print (i[::-1].rjust(maxx))
        word = []
        maxx = -1
        break

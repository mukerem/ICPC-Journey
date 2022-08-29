word = []
maxx = -1
total = {chr(i):[] for i in range(97, 123)}
while True:
    try:
        x = raw_input()
        if x:
            total[x[-1]].append((x[-1], len(x), x[::-1], x))
            maxx = max(maxx, len(x))
        else:
            word = []
            for i in range(97, 123):
                word = total[chr(i)]
                if not word:
                    continue
                word.sort()
                
                for k in word:
                    print k[-1].rjust(maxx)
                
            total = {chr(i):[] for i in range(97, 123)}
            maxx = -1
            print
    except EOFError:
        break

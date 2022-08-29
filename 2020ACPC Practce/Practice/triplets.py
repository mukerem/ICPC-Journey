def recoverSecret(triplets):
    while len(triplets) > 1:
        for j in triplets:
            for i in triplets:
                if i == j:
                    continue
                a,b,c = i
                if a not in j:
                    continue
                if c not in j:
                    continue
                x = j.index(a)
                y = j.index(c)
                x,y = min(x,y), max(x,y)
                if x + 1 == y:
                    j.insert(y, b)
                    triplets.remove(i)
                    break

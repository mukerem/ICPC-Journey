# Time: 2022-08-26 08:28:12
# title: Equal Sums (Easy)
# language: Python 3


from itertools import chain, combinations
for _ in range(int(input())):
    a = list(map(int, input().split()))
    n = a[0]
    a = a[1:]
    s = sum(a)
    print(f'Case #{_+1}:')
    
    sub = chain.from_iterable(combinations(a, r) for r in range(len(a)+1))
    #print(list(sub))
    m = {}
    ok = False
    for i in sub:
        b = sum(i)
        if b in m:
            for j in m[b]:
                if set(j).intersection(set(i)) == set():
                    print(*j)
                    print(*i)
                    ok = True
                    break
                
            if ok == True:
                break
            m[b].append(i)
            
        m[b] = [i]
    else:
        print('impossible')
            
      

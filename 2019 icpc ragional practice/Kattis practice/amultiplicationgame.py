while True:
    try:
        n = int(input())
        
        a = 1
        while True:
            a *= 9
            if a>=n:
                print('Stan wins.')
                break
            a *= 2
            if a>=n:
                print('Ollie wins.')
                break
                
    except EOFError:
        break

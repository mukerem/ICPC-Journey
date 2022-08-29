for _ in range(input()):
    x = raw_input()
    for i in range(len(x), 0, -1):
        if x.count(x[0:i]) > 1:
            ans = i
            break
    print ans

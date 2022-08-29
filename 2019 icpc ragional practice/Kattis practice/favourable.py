for _ in range(input()):
    n = input()
    ans = 0
    stack = []
    d = {}
    for i in range(n):
        x = raw_input().split()
        if len(x) == 2:
            d[int(x[0])] = x[1]
        else:
            d[int(x[0])] = [int(k) for k in x[1:]]
    
    if d[1] == "favourably":
        ans = 1
    elif d[1] == "catastrophically":
        ans = 0
    else:
        stack.extend(d[1])
    while stack:
        z = stack[-1]
        stack.pop()
        if d[z] == "favourably":
            ans += 1
        elif d[z] == "catastrophically":
            continue
        else:
            stack.extend(d[z])
    print ans

for _ in range(int(input())):
    n = int(input())
    s = []
    for i in range(n):
        x,y = input().split(':')
        z = ''.join(y.split()[0].split('-')[::-1])
        s.append((z, x))
    s.sort(reverse=True)
    ans = []
    c = 0
    temp = [s[0][1]]
    for i in range(1, n):
        if s[c][0] in s[i][0]:
            temp.append(s[i][1])
        else:
            c = i
            temp.sort()
            for j in temp:
                print(j)
            temp.clear()
            temp.append(s[i][1])
    temp.sort()
    for j in temp:
        print(j)
    print("=" * 30)
        
        

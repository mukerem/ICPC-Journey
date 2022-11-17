for _ in range(int(input())):
    n = int(input())
    s = input()
    a = list(s)
    b = list(s)
    b.sort()
    if a == b:
        print(0)
        continue
    
    k = 0
    ans = 0
    while k<n and s[k] == '0':k+=1
    while k<n and s[k] == '1':k += 1
    while k<n:
        if a[k] != a[k-1]:
            ans += 1
        k += 1
    print(ans)

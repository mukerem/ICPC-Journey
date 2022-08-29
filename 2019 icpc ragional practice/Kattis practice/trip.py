while True:
    n = int(input())
    if n == 0:
        break
    s = []
    for i in range(n):
        s.append(float(input()))
    ave = sum(s) 
    ans = 0
    for i in s:
        ans += abs(n * i - ave)
    print(ans, ave)
    print("$%.2f"%(ans/(2.0*n)))

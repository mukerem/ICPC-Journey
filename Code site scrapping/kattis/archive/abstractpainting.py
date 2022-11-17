# Time: 2021-02-03 14:01:35
# title: Abstract Painting
# language: Python 3


M = 1000000007
for _ in range(int(input())):
    c,r = list(map(int, input().split()))
    a18 = 1
    a6 = (r-1) + (c-1)
    a2 = (r-1) * (c-1)
    
    ans2 = pow(2, a2, M)
    ans6 = pow(6, a6, M)
    ans18 = 18
    
    ans = (ans18 * ans2 * ans6) % M
    print(ans)

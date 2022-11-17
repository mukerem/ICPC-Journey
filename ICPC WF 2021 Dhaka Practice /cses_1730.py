

def findWinner(a, n):
    if n == 1:
        return "first"
    
    res = 0
    for i in a:
        res ^= i
    #print(res)
    if (res == 0 or n % 2 == 1):
        return "second"
    else:
        return "first"
 

t = int(input())
for _ in range(t):
    n = int(input())
    a = [int(i) for i in input().split()]
    print(findWinner(a, n))

def greedy(deno, V):
    n = len(deno)
    ans = []
 
    i = n - 1
    tot = 0
    while(i >= 0):
        if (V >= deno[i]):
            tot += V // deno[i]
            V = V % deno[i]
            #V -= deno[i]
            #ans.append(deno[i])
 
        i -= 1
 
    #return len(ans)
    return tot
import sys
def minCoins(coins, m, V):

    table = [0 for i in range(V + 1)]
 
    table[0] = 0
 
    for i in range(1, V + 1):
        table[i] = 10000000000000000
 
    for i in range(1, V + 1):
        for j in range(m):
            if (coins[j] <= i):
                sub_res = table[i - coins[j]]
                if (sub_res != 10000000000000000 and
                    sub_res + 1 < table[i]):
                    table[i] = sub_res + 1
    return table[V]

from math import ceil
n = int(input())
x = [int(i) for i in input().split()]
for i in range(n-1):
    y = int(ceil(x[i+1]/x[i])) * x[i]
    a = greedy(x, y)
    b = minCoins(x,n, y)
    if a != b:
        print("non-canonical")
        break
else:
    print("canonical")

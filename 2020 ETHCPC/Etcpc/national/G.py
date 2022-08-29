import sys
from math import ceil
sys.stdin = open("swap.in", 'r')
for  _ in range(int(input())):
    n = int(input())
    x = [int(i) for i in input().split()]
    c = 0
    for i in range(1, n+1):
        if i == x[i-1]:
            c += 1
    d = c //2 + c%2
    print(d)

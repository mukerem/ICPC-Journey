import sys
from math import floor, sqrt,log2
sys.stdin = open("two2.in", 'r')

def two(n):
    if n%2 == 1:
        return -1
    return n//2
for _ in range(int(input())):
    x = int(input())
    print(two(x))
    

import sys
from math import ceil
sys.stdin = open("evens.in", 'r')
for  _ in range(int(input())):

    x = int(input())
    c = x//2
    d = x//2 + x%2
    print(c, d)

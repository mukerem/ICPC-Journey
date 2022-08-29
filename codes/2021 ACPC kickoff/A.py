import sys
from math import floor, sqrt
sys.stdin = open("alimagde.in", 'r')
for _ in range(int(input())):
    x = int(input())
    n = (-1 + sqrt(1 + 8*x))/2.0
    n = floor(n)
    print(x-n)
    

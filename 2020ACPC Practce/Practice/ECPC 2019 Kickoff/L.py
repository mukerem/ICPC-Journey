import sys
sys.stdin = open("exor.in")
M = 1000000007
for _ in range(int(input())):
    n = int(input())
    a = pow(2, 2*n + 1, M)
    b = pow(2, n, M)
    c = (a - b) % M
    print(c)

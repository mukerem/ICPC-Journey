import sys
sys.stdin = open("equal.in")
for _ in range(int(input())):
    a = [int(i) for i in input().split()]
    b = set(a)
    if len(a) == len(b):
        print("NO")
    else:
        print("YES")

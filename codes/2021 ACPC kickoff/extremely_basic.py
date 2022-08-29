import sys
sys.stdin = open("hello.in", 'r')
for _ in range(int(input())):
    a,b = [int(i) for i in input().split()]
    print("sum = %d" % (a+b))

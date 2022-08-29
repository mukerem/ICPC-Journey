a = input()
for i in range(a):
    x = [int(j) for j in raw_input().split()]
    x.sort()
    print x[-2]

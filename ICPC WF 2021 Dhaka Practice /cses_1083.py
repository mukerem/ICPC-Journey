n = int(input())
a = list(map(int, input().split()))
b = [False] * (n+1)
for i in a:
    b[i] = True
for i in range(1, n +1):
    if b[i] == False:
        print(i)
        break

for _ in range(int(input())):
    k,c = [int(i) for i in input().split()]
    if k%c == 0:
        print("IMPOSSIBLE")
        continue
    i = 1
    while True:
        if (i*c - 1)%k == 0:
            print(i)
            break
        i+=1

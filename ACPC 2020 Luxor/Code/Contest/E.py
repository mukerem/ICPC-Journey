for _ in range(int(input())):
    c,b,a = input().split()
    if a[0] == b[0]:
        if a[0] == c[0]:
            if a[1] < c[1] and c[1] < b[1]:
                print("NO")
            elif a[1] > c[1] and c[1] > b[1]:
                print("NO")
            else:
                print("YES")
        else:
            print("YES")
    elif a[1] == b[1]:
        if a[1] == c[1]:
            if a[0] < c[0] and c[0] < b[0]:
                print("NO")
            elif a[0] > c[0] and c[0] > b[0]:
                print("NO")
            else:
                print("YES")
        else:
            print("YES")
    else:
        print("NO")

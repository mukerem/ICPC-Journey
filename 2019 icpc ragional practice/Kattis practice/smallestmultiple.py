from math import gcd
while True:
    try:
        z = input()
        x = [int(i) for i in z.split()]
        ans = 1
        for i in x:
            g = gcd(ans, i)
            ans = ans * i//g
        print(ans)
    except EOFError:
        break

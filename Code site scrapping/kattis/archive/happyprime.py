# Time: 2022-08-23 22:07:16
# title: Happy Happy Prime Prime
# language: Python 3


def is_prime(n):
    s = int(n ** 0.5)
    if n < 2:
        return False
    for i in range(2, s+1):
        if n%i == 0:
            return False
    return True

def happy(n):
    while n >= 10:
        a = list(str(n))
        n = 0
        for i in a:
            n += int(i) ** 2
    if n == 7 or n == 1 :
        return True
    return False
    
for _ in range(int(input())):
    k, n = map(int, input().split())
    if is_prime(n):
        if happy(n):
            print(k, n, 'YES')
        else:
            print(k, n, 'NO')
    else:
        print(k, n, 'NO')
# Time: 2022-08-22 09:16:38
# title: Hardware
# language: Python 3


for _ in range(int(input())):
    a = input()
    b, c = input().split()
    print(a)
    print(b, c)
    b = int(b)
    d = {str(i):0 for i in range(10)}
    digit = 0
    while b > 0:
        x = input().split()
        if x[0] == '+':
            r,s,t = map(int, x[1:])
            for i in range(r, s+1, t):
                b -= 1
                for k in str(i):
                    d[k]+=1
                    digit += 1
        else:
            b -= 1
            for k in x[0]:
                d[k]+=1
                digit += 1    
    for i in d:
        print(f'Make {d[i]} digit {i}')
    if digit == 1:
        print('In total 1 digit')
    else:
        print(f'In total {digit} digits')
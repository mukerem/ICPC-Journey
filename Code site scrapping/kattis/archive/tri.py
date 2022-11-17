# Time: 2022-08-15 09:56:17
# title: Tri
# language: Python 3


a,b,c = map(int, input().split())
#a,b,c = sorted([a,b,c])
if a+b == c:
    print(f'{a}+{b}={c}')
elif a*b == c:
    print(f'{a}*{b}={c}')
elif a-b == c:
    print(f'{a}-{b}={c}')
elif b!= 0 and a%b == 0 and a/b == c:
    print(f'{a}/{b}={c}')
elif a ==b + c:
    print(f'{a}={b}+{c}')
elif a == b * c:
    print(f'{a}=={b}*{c}')
elif a == b - c:
    print(f'{a}={b}-{c}')
elif c!= 0 and b%c == 0 and a== b/c:
    print(f'{a}={b}/{c}')
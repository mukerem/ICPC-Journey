a = input().split()

while a[0] != '-1':
    a, b = a
    a = int(a)
    if a == 0:
        print(f'Bonjour {b}')
    elif a == 1:
        print(f'Ola {b}')
    else:
        print(f'Hello {b}')

    a = input().split()



# Time: 2022-08-14 15:53:00
# title: Secure Doors
# language: Python 3


x = []
for i in range(int(input())):
    a,b = input().split()
    if a == 'entry':
        if b in x:
            print(f'{b} entered (ANOMALY)')
        else:
            x.append(b)
            print(f'{b} entered')
    else:
        if b in x:
            print(f'{b} exited')
            x.remove(b)
        else:
            print(f'{b} exited (ANOMALY)')
        
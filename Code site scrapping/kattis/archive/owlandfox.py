# Time: 2020-12-16 09:00:26
# title: The Owl and the Fox
# language: Python 3


for _ in range(int(input())):
    x = input()
    x = list(x)
    for i in range(len(x)-1, -1, -1):
        if x[i] != '0':
            x[i] = str(int(x[i]) - 1)
            break
    print(int(''.join(x)))

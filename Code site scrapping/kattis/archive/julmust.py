# Time: 2022-08-26 23:02:02
# title: Julemost
# language: Python 3


l = 0
r = int(input())
k = 1
while 1:
    m = (l+r) // 2
    print(m*k, flush=True)
    k += 1
    x = input()
    if x == 'exact':
        break
    elif x == 'less':
        r = m - 1
    else:
        l =  m + 1
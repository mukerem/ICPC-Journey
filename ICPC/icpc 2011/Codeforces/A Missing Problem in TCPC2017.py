t = input()
for i in range(t):
    n = input()
    l = raw_input()
    num = l.split()
    summ = 0
    for i in num:
        summ += int(i)
    total = n*(n+1)/2
    print total - summ

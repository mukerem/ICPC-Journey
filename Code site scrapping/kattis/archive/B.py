n = input()
date = []
plus = [0,1,-1,0,0,1,1,2,3,3,4,4,5]
minus = [1,-2,1,0,1,0,1,1,0,1,0,1]
def date_to_number(x,y):
    t = 30 * (x-1) + y + plus[x-1]
    return t
for i in range(n):
    month, day = [int(k) for k in raw_input()[-5:].split('-')]
    x = date_to_number(month, day)
    date.append([x, month, day])
date.sort()
date.append(date[0][:])
date[-1][0] += 365
dif = []
for i in range(n):
    dif.append((date[i+1][0] - date[i][0], date[i+1][1], date[i+1][2]))
dif.sort()
if n == 1 or dif[-1][0] != dif[-2][0]:
    day = dif[-1][2] - 1
    month = dif[-1][1]
else:
    maxx = dif[-1]
    tie = []
    for i in dif[::-1]:
        if i[0] == maxx[0]:
            x,y = i[1:]
            if x < 10 or x == 10 and y<=28:
                x += 12
            tie.append((x,y))
            continue
        break
    tie.sort()
    day = tie[0][1] - 1
    month = tie[0][0]
    if month > 12:
        month -= 12
if day == 0:
    month -= 1
    if month == 0:
        month = 12
    day = 30 + minus[month - 1]
print "{:0>2d}".format(month) + "-" + "{:0>2d}".format(day)

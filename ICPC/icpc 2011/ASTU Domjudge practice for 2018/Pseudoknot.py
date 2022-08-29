from math import ceil
string = raw_input()
reverse = ''
for i in string:
    reverse = i+reverse
total_forward = []
total_backward = []
size = len(string)
for i in range(1,size+1):
    if string[0:i] in reverse:
        reverse_start = size - reverse.find(string[0:i])-i
        total_forward.append([i,reverse_start])
for i in range(1,size+1):
    if reverse[0:i] in string:
        reverse_start = string.find(reverse[0:i])
        total_backward.append([size-i  ,reverse_start])

total_backward.reverse()
total_forward.reverse()
maximum = -1
word =[]
for i in total_forward:
    for j in total_backward:
           if  i[1] != size + j[1] - j[0]:
               continue
           elif i[0] > j[1]:
               continue
           elif i[0]+i[1] > j[0]:
               continue
           else:
               if maximum < min(i[0], size - j[0]):
                   #word = [total[i][0], total[j][0], total[i][1],total[j][1]]
                   maximum = min(i[0], size - j[0])
               #maximum = max(maximum, min(len(total[i][0]), len(total[j][0])))


print maximum

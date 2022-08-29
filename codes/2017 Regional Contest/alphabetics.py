def alpha(s):
    for i in s:
        if i.isalpha():
            return True
    return False
while True:
    a = input().lower().split()
    if a == ["-1"]:
        break
    count = [0 for i in range(26)]
    word = 0
    for i in a:
        if alpha(i):
            word += 1
        for j in i:
            if j.isalpha():
                count[ord(j)-97] += 1
    print (word, end=" ")
    for i in count:print (i,end=" ")
    print()

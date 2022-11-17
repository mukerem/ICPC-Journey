# Time: 2022-08-18 12:24:36
# title: Marko
# language: Python 3


n = int(input())
a = ['abc','def','ghi','jkl','mno','pqrs','tuv','wxyz']
b = []
for i in range(n):
    s = input()
    u = ''
    for j in s:
        for idx, k in enumerate(a):
            if j in k:
                u += str(idx+2)
                break
    b.append(u)
s = input()
print(b.count(s))
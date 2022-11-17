# Time: 2022-08-16 18:43:21
# title: Red Rover
# language: Python 3


s = input()
n = len(s)
a = n
for i in range(n):
    for j in range(i+1, n):
        m = s[i:j]
        x = s.count(m)
        if x > 1:
            y = (j-i) * x 
            z = n - y + (j-i) + x
            a = min(a, z)
print(a)
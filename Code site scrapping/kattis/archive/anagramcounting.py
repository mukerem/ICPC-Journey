# Time: 2019-11-19 15:54:06
# title: Anagram Counting
# language: Python 3


from math import factorial
while True:
    try:
        a = input()
        m = {}
        for i in a:
            if i in m:
                m[i] += 1
            else:
                m[i] = 1
        ans = factorial(len(a))
        for i in m:
            x = m[i]
            ans //= factorial(x)
        print(int(ans))
    except EOFError:
        break

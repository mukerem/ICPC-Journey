# Time: 2022-08-14 14:24:00
# title: T9 Spelling
# language: Python 3


a = ['abc', 'def', 'ghi', 'jkl', 'mno', 'pqrs', 'tuv', 'wxyz']
for _ in range(int(input())):
    s = input()
    print(f'Case #{_+1}: ', end='')
    ans = []
    for i in s:
        for j in range(8):
            if i in a[j]:
                k = a[j].index(i) + 1
                ans.append(str(j + 2) * k)
                break
        else:
            ans.append('0')
    s = ''
    for i in range(len(ans)-1):
        if ans[i][-1] == ans[i+1][0]:
            s += ans[i] + ' '
        else:
            s += ans[i]
    s += ans[-1]
    print(s)

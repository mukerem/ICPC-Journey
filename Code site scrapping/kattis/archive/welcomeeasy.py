# Time: 2022-08-25 21:19:52
# title: Welcome to Code Jam (Easy)
# language: Python 3


def count(a, b, m, n):
    if ((m == 0 and n == 0) or n == 0):
        return 1
    if (m == 0):
        return 0
    if (a[m - 1] == b[n - 1]):
        return (count(a, b, m - 1, n - 1) +
                count(a, b, m - 1, n))
    else:
        return count(a, b, m - 1, n)
        
        
for _ in range(int(input())):
    a = input()
    b = 'welcome to code jam' 
    c = count(a, b, len(a), len(b))
    print(f'Case #{_+1}:', str(c).zfill(4))

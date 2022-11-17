# Time: 2022-08-25 19:59:00
# title: Astrological Sign
# language: Python 3


a = [
    (3,21),
    (4,21),
    (5,21),
    (6,22),
    (7,23),
    (8,23),
    (9,22),
    (10,23),
    (11,23),
    (12,22),
    (13,21),
    (14,20)
    ]
b = {
    'Mar': 3,
    'Apr': 4,
    'May': 5,
    'Jun': 6,
    'Jul': 7,
    'Aug': 8,
    'Sep': 9,
    'Oct': 10,
    'Nov': 11,
    'Dec': 12,
    'Jan': 13,
    'Feb': 14,
}

c = [
    'Aries',
    'Taurus',
    'Gemini',
    'Cancer',
    'Leo',
    'Virgo',
    'Libra',
    'Scorpio',
    'Sagittarius',
    'Capricorn',
    'Aquarius',
    'Pisces',
    ]
for i in range(int(input())):
    x, y = input().split()
    x = int(x)
    y = b[y]
    idx = 0
    for j, k in a:
        if y < j or y == j and x < k:
            break
        idx += 1
    print(c[idx-1])

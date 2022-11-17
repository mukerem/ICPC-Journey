# Time: 2022-08-17 14:07:26
# title: False Sense of Security
# language: Python 3


a = {
    'A': '.-', 
    'H': '....',
    'O': '---',
    'V': '...-',
    'B': '-...',
    'I': '..',
    'P': '.--.',
    'W': '.--',
    'C': '-.-.',
    'J': '.---',
    'Q': '--.-',
    'X': '-..-',
    'D': '-..',
    'K': '-.-',
    'R': '.-.',
    'Y': '-.--',
    'E': '.',
    'L': '.-..',
    'S': '...',
    'Z': '--..',
    'F': '..-.',
    'M': '--',
    'T': '-',
    'G': '--.',
    'N': '-.',
    'U': '..-',
    '_': '..--',
    ',': '.-.-',
    '.': '---.',
    '?': '----'
    }
b = {a[i]: i for i in a}

while 1:
    try:
        s = input()
        x = ''
        y = ''
        for i in s:
            z = a[i]
            x += z
            y += str(len(z))
        y = y[::-1]
        w = ''
        k = 0
        for i in y:
            j = int(i)
            w += b[x[k: k+j]]
            k += j
        print(w)
    except EOFError:
        break

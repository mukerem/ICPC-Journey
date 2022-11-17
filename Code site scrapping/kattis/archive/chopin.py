# Time: 2022-08-16 21:42:21
# title: Preludes
# language: Python 3


d = {
    'A#': 'Bb',
    'C#': 'Db',
    'D#': 'Eb',
    'F#': 'Gb',
    'G#': 'Ab',
    'Ab': 'G#',
    'Gb': 'F#',
    'Eb': 'D#',
    'Db': 'C#',
    'Bb': 'A#'
}
k = 1
while 1:
    try:
        s, t = input().split()
        if s in d:
            print(f'Case {k}: {d[s]} {t}')
        else:
            print(f'Case {k}: UNIQUE')
        k += 1
    except:
        break
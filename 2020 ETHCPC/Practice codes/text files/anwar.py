s = [0] * 26
t = [0] * 26
x = "hello"
y = "llohej"
if len(x) != len(y):
    print False
for i in x:
    z = ord(i) - 97
    s[z] += 1

for i in y:
    z = ord(i) - 97
    t[z] += 1
print s, t, s == t
a = "Hello world"
b = "l"
st = []
add = 0
while 1:
    x = a.find(b)
    if x == -1:
        break
    add += x
    st.append(add)
    add += 1
    a = a[x + len(b): ]
    print a
print st
print ord('S')
print chr(66)

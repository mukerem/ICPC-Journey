while True:
	n= input();
	if n == '0':
		break;
	n, s = n.split()
	n = int(n)
	t = ''
	k = len(s)//n
	for i in range(n):
		tt = s[i*k:i*k+k]
		t += tt[::-1]
	print(t)
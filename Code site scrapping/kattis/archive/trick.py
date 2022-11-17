# Time: 2021-11-30 13:16:29
# title: Number Trick
# language: Python 3


u = input()
k = float(u)
if '.' in u:
      v = len(u) - u.index('.') - 1
else:
      v = 0
v = 10 ** v
aa = ''
for i in u:
      if i != '.':
            aa+=i
aa = int(aa)
x = k/10.0
ans = []
if k>=10:
      print("No solution")
else:    
      if k == 1:
            ans.extend(list(range(1,10)))
      for z in range(0,8):
            y = 10**z
            for w in range(1,10):
                        num = aa*w*y-v*w
                        den = 10*v-aa
                        h = num/den
                        if num%den == 0 and num*den>0 and z>= len(str(int(num//den))):
                              h = num//den
                              r = w*10**z + h
                              s = 10 * h + w
                              #if r * k == s:  
                              ans.append(r)
                                    #print(h,w)
      ans = list(set(ans))
      ans.sort()
      if ans:
            for i in ans:
                        print(i)
      else:
            print("No solution")

for t in range(int(input())):
  n = int(input())
  s1 = input()
  s2 = input()
  isSame = True
  for i in range(n):
    if(s1[i]=='R'and s2[i]!='R'or(s1[i]=='G'or s1[i]=='B')and s2[i]=='R'):
      isSame = False
      break
  if(isSame):
    print("YES")
  else:
    print("NO")
    
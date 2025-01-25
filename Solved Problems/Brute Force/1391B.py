for t in range(int(input())):
  arr = list(map(int,input().strip().split()))[:2]
  n = arr[0]
  m = arr[1]
  change = 0
  for x in range(n):
    s = input()
    if(not(x == n-1)):
      if(s[m-1] == 'R'):
        change += 1
    else:
      for i in range(m):
        if(s[i] == 'D'):
          change += 1
  print(change)
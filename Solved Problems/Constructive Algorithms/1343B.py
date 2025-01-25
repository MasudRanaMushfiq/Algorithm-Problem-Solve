for t in range(int(input())):
  n = int(input())
  if(n%4):
    print("NO")
  else:
    print("YES")
    evensum = 0
    for x in range(2, n+1, 2):
      print(x, end=" ")
      evensum += x
    oddsum = 0
    for x in range(1, n-1, 2):
      print(x, end=" ")
      oddsum += x
    print(evensum - oddsum)
      
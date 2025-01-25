for t in range(int(input())):
  n = int(input())
  arr = list(map(int,input().strip().split()))[:n]
  odd = []
  even = []
  for x in arr:
    if(x%2):
      odd.append(x)
    else:
      even.append(x)
  for x in odd:
    print(x, end=" ")
  for x in even:
    print(x, end=" ")
  print()
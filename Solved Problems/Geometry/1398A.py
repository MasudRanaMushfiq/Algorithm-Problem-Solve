for t in range(int(input())):
  n = int(input())
  arr = list(map(int,input().strip().split()))[:n]
  if(arr[0] + arr[1] > arr[n-1]):
    print(-1)
  else:
    print("1 2 %d" % (n))
  
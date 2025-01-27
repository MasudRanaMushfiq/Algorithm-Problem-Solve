import math
arr = list(map(int,input().strip().split()))[:2]
k = arr[0]
r = arr[1]
x = 1
while True:
  if(x*k%10 == 0 or (x*k-r)%10 == 0):
    print(x)
    break
  else:
    x += 1
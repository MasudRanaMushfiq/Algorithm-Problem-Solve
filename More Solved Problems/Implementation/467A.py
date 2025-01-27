n = int(input())
available = 0
for x in range(n):
  arr = list(map(int,input().strip().split()))[:2]
  if(arr[1]-arr[0] >= 2):
    available += 1
print(available)
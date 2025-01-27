arr1 = list(map(int,input().strip().split()))[:2]
n = arr1[0]
h = arr1[1]
arr2 = list(map(int,input().strip().split()))[:n]
bend = 0
for x in arr2:
  if(x > h):
    bend += 1
print(bend*2+(n-bend))
for t in range(int(input())):
  arr = list(map(int,input().strip().split()))[:3]
  arr.sort()
  if(arr[0] == arr[1]):
    print("NO" if arr[2]%2==1 else "YES")
  elif(arr[1] == arr[2]):
    print("NO" if arr[0]%2==1 else "YES")
  else:
    print("YES" if arr[2]==arr[1]+arr[0] else "NO")
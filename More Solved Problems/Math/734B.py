arr = list(map(int,input().strip().split()))[:4]
k2 = arr[0]
k3 = arr[1]
k5 = arr[2]
k6 = arr[3]
minimum1 = min(k2, k5, k6)
minimum2 = min((k2-minimum1), k3)
print(minimum1*256+minimum2*32)
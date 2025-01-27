k = int(input())
l = int(input())
m = int(input())
n = int(input())
d = int(input())
suffered = 0;
for x in range(1, d+1):
  if(not(x%k and x%l and x%m and x%n)):
    suffered += 1;
print(suffered)
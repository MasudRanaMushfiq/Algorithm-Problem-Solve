s = input()
chars = set()
for x in s:
  if(x.islower()):
    chars.add(x)
print(len(chars))
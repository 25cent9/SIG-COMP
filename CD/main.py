#   Innocent Niyibizi
#   4-15-17
#   Kattis: 'CD'
jackNum, jillNum = input().split()
while int(jackNum) > 0 and int(jillNum) > 0:
  jack = []
  jill = []
  sell = 0
  jackNum = int(jackNum)
  jillNum = int(jillNum)
  for num in range(0, jackNum):
    jack+=input()
  for num in range(0, jillNum):
    jill+=input()


  if(jackNum>jillNum):
    for e in jack:
       if e in jill:
         sell+=1
  elif(jillNum>jackNum):
    for e in jill:
       if e in jack:
         sell+=1
  else:
    for e in jack:
       if e in jill:
         sell+=1
  print(sell)
  jackNum, jillNum = input().split()

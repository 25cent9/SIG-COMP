def compute(number):
  while 'Q' in number:
    number.remove('Q')
  return number

firstNum = list(input())
secondNum = list(input())

if (len(firstNum) > len(secondNum)):
  while len(secondNum) != len(firstNum):
    secondNum.insert(0, '0')
elif (len(secondNum) > len(firstNum)):
  while len(firstNum) != len(secondNum):
    firstNum.insert(0, '0')

length = len(firstNum)
for num in range(0, length):
  if(int(firstNum[num]) > int(secondNum[num])):
    secondNum[num] = 'Q'
  elif (int(firstNum[num]) < int(secondNum[num])):
    firstNum[num] = 'Q'

compute(firstNum)
compute(secondNum)
if len(firstNum) > 0:
  print(int(''.join(firstNum)))
else:
  print('YODA')
if len(secondNum) > 0:
  print(int(''.join(secondNum)))
else:
  print('YODA')

import sys
<<<<<<< HEAD

diction = {}
for line in sys.stdin:
  command = line.split()
  for word in command:
    if word == "def":
      key = command[1]
      value = int(command[2])
      diction[key] = value
      break
    elif word == "calc":
      total = 0
      left = 0
      right = 0
      for value in range(0, len(command)):
        if command[value] == '+':
          #total += left+right
          print(left+" "+right)
        elif value != '=' and value != 'calc':
          left = command[value]
          right = command[value+2]
          print(left+" "+right)
    elif word == "clear":
      diction.clear()
  print (diction)
=======
diction = {}
operation = []
left = 'N'
right = 'Q'
op = '!'

def getKey(value):
  for key in diction.keys():
    if int(diction[key]) == value:
      return key
  return "unknown"

def operate(lft, oper, rght):
  if oper == '-':
    return int(lft) - int(rght)
  else:
    return int(lft) + int(rght)

for line in sys.stdin:
  total = 0
  command = line.split()
  if command[0] == 'def':
    key = command[1]
    val = command[2]
    diction[key] = val
  elif command[0] == 'calc':
    left = 'N'
    right = 'Q'
    op = '!'
    for num in range(1, len(command)):
      if command[num] != '=':
        operation.append(command[num])
      else:
        for curr in range(0, len(operation)):
          if operation[curr] != '+' and operation[curr] != '-':
            try:
              if left == 'N':
                left = diction[operation[curr]]
              elif curr > 0 and operation[curr-1] =='+' or operation[curr-1]=='-':
                right = diction[operation[curr]]
              if left!='N' and right != 'Q':
                left = operate(left, op, right)
            except KeyError:
              left = str("unknown")
              break
          else:
            op = operation[curr]
        operation.clear()
        command.remove('calc')
        print (' '.join(command)+" "+ str(getKey(left)))
  elif command[0] == 'clear':
    diction.clear()
>>>>>>> origin/master

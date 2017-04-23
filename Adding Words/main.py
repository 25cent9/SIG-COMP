import sys

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

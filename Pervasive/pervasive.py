#   Innocent Niyibizi
import sys
def is_number(s):
  try:
    float(s)
    return True
  except ValueError:
    return False

for line in sys.stdin:
  values = line.split()
  num = 0
  total = 0
  name = ""
  wordCount = 0
  for value in values:
    if(is_number(value)==False):
      name+=' '+value
    else:
      total += float(value)
  wordCount = name.count(' ')
  print(str(total/(len(values)-wordCount))+name)

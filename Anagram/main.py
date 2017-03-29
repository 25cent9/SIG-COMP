import math, sys

for line in sys.stdin:
  length = len(line)-1
  fact = math.factorial(length)
  print(str(fact))

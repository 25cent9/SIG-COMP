#   Innocent Niyibizi
#   4-6-17
#   Kattis: 'String Matching'

import re

def findThem(sub, sentence):
  locations = []
  for f in re.finditer(sub, sentence):
    locations+=str(f.start())
  print(*locations, sep=' ')

while True:
  try:
    substr = str(input())
    phrase = str(input())
    findThem(substr, phrase)
  except EOFError:
    break

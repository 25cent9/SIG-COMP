import re, sys

def firstVowel(screeee):
    i = re.search("[aeiouy]", screeee, re.IGNORECASE)
    return -1 if i == None else i.start()

def isVowel(char):
    return char.lower() in 'aeiouy'

for line in sys.stdin:
  words = []
  words = line.split()
  for word in words:
    if isVowel(word[0].lower()):
      print(word+"yay", end=' ')
    else:
      firstVowelIndex = firstVowel(word)
      substring = word[:firstVowelIndex]
      print (word[firstVowelIndex:]+substring+"ay", end=' ')
  print()

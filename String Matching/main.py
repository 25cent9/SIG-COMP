#   Innocent Niyibizi
#   4-6-17
#   Kattis: 'String Matching'

import re, sys

def findThem(sub, sentence):
  locations = []
  for f in re.finditer(sub[0:len(sub)-1], sentence[0:len(sentence)-1]):
    locations+=str(f.start())
  print ' '.join(str(x) for x in locations)

words = []
try:
  for line in sys.stdin:
    words.append(line)
    if(len(words)==2):
      findThem(str(words[0]), str(words[1]))
      del words[:]
except:
    substr = str(input())
    sent = str(input())
    findThem(substr, sent)

#   Innocent Niyibizi
#   4-2-17
#   Kattis: 'How Many Digits?'

from math import ceil, lgamma, log
import sys

for line in sys.stdin:
  fact = ceil(lgamma(int(line)+1)/log(10))
  if(fact==0):
    fact+=1
  print (fact)

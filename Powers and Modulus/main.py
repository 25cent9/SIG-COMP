#   Innocent Niyibizi
#   4-6-17
#   Kattis: 'Powers and modulous'

import re, sys, math

a = int(input())
b = int(input())
addition = 0
modSum = 0
for val in range(0, a):
  addition += math.pow(val, b)
modSum = addition%a
print(int(modSum))

#   Innocent Niyibizi
#   4-2-17
#   Kattis: 'Inverse Factorials'
factorial = int(input())
num = 0
while factorial != 1 and factorial >= 0:
  num += 1
  factorial = factorial // num
  #print(str(factorial)+" "+str(num))
print(num)

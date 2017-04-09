#   Innocent Niyibizi
#   4-8-17
#   Kattis: 'Reversed Binary Numbers'

binary = int(input())
binary = "{0:b}".format(binary)
rev = binary[::-1]
print(int(rev,2))

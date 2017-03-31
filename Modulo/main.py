#   Innocent Niyibizi
#   3-31-17
#   Kattis: 'Modulo'

unique = []
count = 0
for num in range(0, 10):
    number = int(input())
    Modulo = number%42
    if(Modulo not in unique):
        unique.append(Modulo)
        count+=1
print(count)

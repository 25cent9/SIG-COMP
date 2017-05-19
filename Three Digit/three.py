import math
def count_trailing_zeros(n):
    ntz = 0
    while True:
        if n % 10 == 0:
            ntz += 1
            n = n//10
        else:
            break
    return ntz
num = int(input())
fact = math.factorial(num)
value = str(fact)
print(value[::-1])
# trailNum = int(count_trailing_zeros(fact))
# value = str(fact)
# rev = value[::-1]
# sub = rev[trailNum:trailNum+3]
# print(sub[::-1])

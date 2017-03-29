# Innocent Niyibizi
# 3-28-17
# Kattis: 'Simon Says'

simon = "Simon says"

tests = int(input())
for i in range(0, int(tests)):
    phrase = input()
    if simon in phrase:
        print(phrase[len(simon):])

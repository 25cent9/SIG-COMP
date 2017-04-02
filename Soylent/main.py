#   Innocent Niyibizi
#   4-2-17
#   Kattis: 'Soylent'

caloriesPerBot = 400
testCases = int(input())

for test in range(0, testCases):
    calories = int(input())
    print(int(calories/caloriesPerBot))

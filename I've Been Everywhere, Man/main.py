#   Innocent Niyibizi
#   3-30-17
#   Kattis: 'I've Been Everywhere, Man'

tests = int(input())
for test in range(0, tests):
    numCities = int(input())
    cities=[" "]
    unique = 0
    for num in range(0, numCities):
        city = str(input())
        if(city not in cities):
            cities.append(city)
            unique+=1
    print(unique)

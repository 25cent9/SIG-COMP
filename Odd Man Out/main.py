#   Innocent Niyibizi
#   4-9-17
#   Kattis: 'Odd Man Out'

testCases = int(input())
for test in range(0, testCases):
    numGuests = int(input())
    person = input().split(" ")
    for x in person:
        if(person.count(x)==1):
            print("Case #"+str(test+1)+": "+x)
            break;

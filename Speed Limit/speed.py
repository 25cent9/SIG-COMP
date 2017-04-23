import sys
testCases = 0
for test in sys.stdin:
    if int(test) != -1:
        testCases = int(test)
        speedLimit = 0
        dist = 0
        time = 0
        elapsedTime = 0
        currDist = 0
        for line in range(0, testCases):
            speedLimit, elapsedTime = input().split()
            speedLimit = int(speedLimit)
            elapsedTime = int(elapsedTime)
            currDist = speedLimit*abs(elapsedTime-time)
            time += elapsedTime-time
            dist+=currDist
        print(str(dist)+" miles")

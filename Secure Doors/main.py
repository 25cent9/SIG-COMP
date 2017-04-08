#   Innocent Niyibizi
#   3-31-17
#   Kattis: 'Secure Doors'

numTests = int(input())
entered = []
exited = []
for test in range(0, numTests):
    log = str(input())
    space = log.find(' ')
    code = log[:space]
    name = log[space:]
    if(code == "entry" and (name in entered)):
        print(name+" entered (ANOMALY)")
    elif(code == "entry" and (name not in entered)):
        entered.append(name)
        print(name+" entered")
    elif(code == "exit" and (name not in exited) and (name not in entered)):
        print(name+" exited (ANOMALY)")
    elif(code == "exit" and (name not in exited) and (name in entered)):
        exited.append(name)
        entered.remove(name)
        print(name+" exited")    
    pass

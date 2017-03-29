#   Innocent Niyibizi
#   3-28-17
#   Kattis: 'Backspace'

#import time
phrase = str(input())
#start_time = time.time()
for letter in phrase:
    if(letter == '<'):
        index = phrase.find('<')
        phrase=phrase[:index-1]+phrase[index+1:]
print(phrase)
#print("--- %s seconds ---" % (time.time() - start_time))

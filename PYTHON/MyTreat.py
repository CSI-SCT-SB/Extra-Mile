#solved question of my-treat Question in ieee extreme coding competition 
def parser():
    while 1:
        data = list(input().split(' '))
        for number in data:
            if len(number) > 0:
                yield(number)   

input_parser = parser()

def get_word():
    global input_parser
    return next(input_parser)

def get_number():
    data = get_word()
    try:
        return int(data)
    except ValueError:
        return float(data)

def theSum(aList):
    s = 0 
    for x in aList:
       if x > 0:
           s = s + x
    return s
  
import numpy
import scipy

a = get_number()

for _ in range(a):
    give = {}
    rec = {}
    diff = {}
    b = get_number()
    for _ in range(b):
        c = get_word()
        d = get_number()
        if c in give.keys():
            give[c] += d
        else:
            rec[c] = 0
            give[c] = d
        for _ in range(d):
            c = get_word()
            if c in rec.keys():
                rec[c] += 1
            else:
                give[c]=0
                rec[c] = 1
    x = [*set(list(give.keys()) + list(rec.keys()))]
    for i in x:
        diff[i] = rec[i]-give[i] 
    # print(diff)
    print(theSum(diff.values()),end=' ')
    print(min(diff.values())*-1)

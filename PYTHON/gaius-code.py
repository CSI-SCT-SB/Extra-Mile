#ieee extreme 2022 solved code for gaius code

def shift(s):
     return chr((ord(s) - 109) % 26 + 97)

def shiftu(s):
     return chr((ord(s) - 77) % 26 + 65)

a = input()

for i in a:
    if i.islower():
        print(shift(i),end='')
    elif i.isupper():
        print(shiftu(i),end='')
    else:
        print(i, end='')

import random
num=random.randint(1,100)
x=0
while x<5:
    g=int(input("\nGuess a number bw 1...100:"))
    if g==num:
        print("You win:)")
        break
    elif g>num:
        print("Number is Less than",g)
        x+=1
    else:
        print("Number is Greater than",g)
        x+=1
    print("You have",(5-x),"chances left")
if not x<5:
    print("You lose :( \nThe number was",num)

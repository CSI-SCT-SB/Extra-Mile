#REGNO-21BCE1103
#NAME-AKANKSH SINHA
#                                                          LUCKY 7 GAME

import random
print("Hey there, would u like to play a game of lucky 7?")
print("Enter (y/n): ")
wp = input().lower()
total = 0

def play():
    global total
    while True:
        amount = int(input("Enter Amount To Bet "))
        print("Enter 1 for greater than 7")
        print("Enter 2 for less than 7")
        print("Enter 3 for lucky 7")
        opt = int(input())
        
        d1 = random.randint(1,6)
        d2 = random.randint(1,6)
        print("Number on dice 1 = ",d1)
        print("Number on dice 2 = ",d2)
        if opt==1:
            if d1+d2>7:
                print("Congratulations!")
                print("You earned ",amount*2)
                total+=amount*2
            else:
                print("Oh no!")
            print("Better luck next time")
            print("You lost ", amount)
            total-=amount
        elif opt==2:
            if d1+d2<7:
                print("Congratulations!")
                print("You earned ",amount*2)
                total+=amount*2
            else:
                print("Oh no!")
                print("Better luck next time")
                print("You lost ", amount)
                total-=amount
        elif opt==3:
            if d1+d2==7:
                print("Congratulations!")
                print("You earned ",amount*3)
                total+=amount*3
            else:
                print("Oh no!")
                print("Better luck next time")
                print("You lost ", amount)
                total-=amount
        print("Play More?")
        print("Enter (y/n): ")
        pm = input().lower()
        if pm =='y':
            continue
        else:
            print("Thanks for playing")
            print("Total Ledger = ",total)
    
    
if wp == 'y':
    print("Would you like to read the rules?")
    print("Enter (y/n): ")
    ru = input().lower()
    if ru =='y':
        print("1. In this game u bet on the sum of dice")
        print("2. You have 3 options, bet on sum greater than 7, bet on sum less than 7, bet on sum equal to 7")
        print("3. If your bet is correct on greater or less, your money is doubled. If it is correct on equal to 7, it is tripled")
        print("4. You can quit anytime")
        print("Ready?")
        print("Enter (y/n): ")
        pl = input().lower()
        if pl =='y':
            play()
        else:
            print("--------------------RULES--------------------------------------------------")
            print("1. In this game u bet on the sum of dice")
            print("2. You have 3 options, bet on sum greater than 7, bet on sum less than 7, bet on sum equal to 7")
            print("3. If your bet is correct on greater or less, your money is doubled. If it is correct on equal to 7, it is tripled")
            print("4. You can quit anytime")
            print("Ready?")
            print("Enter (y/n): ")
            pl = input().lower()
            if pl =='y':
                play()
            else:
                print("Forfetting")
        
        
    else:
        play()

else:
    print("Thank you for visiting")

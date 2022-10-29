import random
n=random.randint(1,6)
guess=int(input("Enter a number between 1 to 6 :"))
if n==guess:
    print("Congratulations, You won the lottery ")
else:
    print("Sorry, Try again, The lucky number was : ", n) 

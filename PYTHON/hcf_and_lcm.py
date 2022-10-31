#Program to find HCF and/or LCM of two numbers in python 
def hcf(x, y):

    if x > y:
        smaller = y
    else:
        smaller = x
    for i in range(1, smaller+1):
        if((x % i == 0) and (y % i == 0)):
            hcf = i
    return hcf


def lcm(x, y):

    if x > y:
        greater = x
    else:
        greater = y

    while(True):
        if((greater % x == 0) and (greater % y == 0)):
            lcm = greater
            break
        greater += 1

    return lcm


num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
while (True):
    print("-------HCF AND LCM-------")
    print("1. HCF")
    print("2. LCM")
    print("3. Exit")
    choice = int(input("------CHOOSE OPTION------ \n"))
    if(choice == 1):
        print("The HCF is ", lcm(num1, num2))
    elif (choice == 2):
        print("The lcm is ", hcf(num1, num2))
    elif (choice == 3):
        print("Exiting...")
        break
    else:
        print("Invalid choice, try again")

#Program to generate password using python random function

import random

lower = "abcdefghijklmnopqrstuvwxyz"
upper = "ABCEDFGHIJKLMNOPQRSTUVWXYZ"
numbers = "0123456789"
symbols = "[]{}();*/-_"
all = lower + upper + numbers + symbols

length = int(input("Choose length of password "))

password = "".join(random.sample(all, length))
print("Password is :", password)

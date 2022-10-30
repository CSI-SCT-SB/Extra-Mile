"""
PYTHON CODE

to find the total number of messages
in a Whatsapp chat

By Arjun R
12 December 2020
(All rights reserved):)
"""
filename = "WhatsApp Chat with (ELEC IITM) '20 _YesSpam_.txt" # Export the whatsapp chat as a .txt file

target = open(filename,
              'r', errors='ignore')  # opens the required file
ls = target.readlines()  # Reads file into a list of lines
tot_count = 0  # To store total number
for i in ls:
    newls = i.split(",")
    date = newls[0]  # date variable used to identify each new message
    checkls = date.split("/")
    count = 0
    for j in checkls:
        if j.isdigit():  # Checking if the date part is in the required format
            count += 1
    if count == 3:
        tot_count += 1  # After date check, incrementing the total current count

print("The total no.of messages is:", tot_count)

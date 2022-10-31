#!/usr/bin/env python3


import re
import os
import sys
import subprocess

#function for moving py files from a specific <path(from_dict)> to another specific<path(to_dict)>
print("******************WELCOME TO JAMA PYCHANGER*********************"+"\n")
# enter the path for from_dict

#Main function for the script
def main():
      while True:
         path = input("Enter the path of from dict(/home/<user>/..):") #enter the path for from_dict
         file_list = []
         #initialising list containing files of from_dict
         py_list = []
         #initialising list containing only python files of from_dict
         for files in os.listdir(path):
             #iterating through the files in from_dict
             file_list.append(files)
             #appending the files inside the file_list
         for files in file_list:#iterating through files inside the file_list
             pattern = r"\w+\.py$"
             #pattern for [".py"] files
             result = re.match(pattern,files)
             #chech if pattern mathches for any file in the file_list
             if result:
                 #if returns True:
               py_list.append(files)
               #the python files are apprended to py_list
         pattern1 = r"/home/(\w*)/"
         #pattern for extracting the username from the path
         result1 = re.search(pattern1,path)
         #for searching the pattern match
         user = result1[1]
         #saving the group for user username
         seconddict = input("Enter to dict path(/home/<username>/..):")
         #Entering of the path of to_dict
         for file in py_list:
             #iterating on py_list for to format the moving paths
             place =  path+"/"+file
             place2 = seconddict
             subprocess.run(["mv",place,place2])
             #using subprocess.run function to move files from one directory to another
         aim = input("Enter (yes/no) to continue or not:)")
         if aim == "no":
            print("THANKYOU!.....")
            sys.exit(0)
    
         
if __name__ == "__main__":
  main()

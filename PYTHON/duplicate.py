def dup(l):
    final_list = []
    for num in l:
        if num not in final_list:
            final_list.append(num)
    return final_list
n=int(input("Enter the Number of Elements: "))
print("Enter the Elements: ")
l=[]
for i in range(n):
    x=int(input())
    l.append(x)
print("List before: ",l)
print("List after Removing Duplicates: ",dup(l))

def ls(l,n,num):
    flag=0
    for i in range(n):
        if l[i]==num:
            print("Element found at the position: ", i+1)
            flag=1
            break
    if flag==0:
        print("Element not Found")
def bs(l,num,n):
    low=0
    high=n
    mid=n//2
    flag=0
    while(low<high):
        if num==l[mid]:
            print("Element found at the position: ",mid+1)
            flag=1
            break
        elif num>l[mid]:
            low=mid+1
        else:
            high=mid-1
        mid=(high+low)//2
    if flag==0:
        print("Element not Found")
def sort(L,n):
    for p in range(n-1):
        for i in range(n-1):
            if L[i]>L[i+1]:
                t=L[i]
                L[i]=L[i+1]
                L[i+1]=t
ch=0
while(ch!=3):
    print("MENU")
    print("1.Linear Search")
    print("2.Binary Search")
    print("3.Exit")
    ch=int(input("\nEnter your choice: "))
    if ch==1:
        n=int(input("Enter the Number of Elements: "))
        print("Enter the Elements: ")
        l=[]
        for j in range(n):
            x=int(input())
            l.append(x)
        print("The List is",l)
        num=int(input("Enter the Number to be Searched: "))
        ls(l,n,num)
    elif ch==2:
        n=int(input("Enter the Number of Elements: "))
        print("Enter the Elements: ")
        l=[]
        for j in range(n):
            x=int(input())
            l.append(x)
        sort(l,n)
        print("The List after sorting is",l)
        num=int(input("Enter the Number to be Searched: "))
        bs(l,num,n)
    elif ch==3:
        print("Exiting.....")
    else:
        print("Enter Correct Input")
    print("\n")  

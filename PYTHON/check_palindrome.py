def ispalindrome(s):
    lst=[]
    lst.extend(s)
    lst.reverse()
    
    if lst==s:
        print(str(s),"is palindrome")
    else:
        print(str(s)," nop")

r=[1,2,3,4,3,2,1,4]
ispalindrome(r)

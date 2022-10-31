def isempty(stk):
    if stk==[]:
        return True
    else:
        return False
def push(stk,item):
    stk.append(item)
    top=len(stk)-1
def display(stk):
    if isempty(stk):
        print("Stack empty")
    else:
        top=len(stk)-1
        print(stk[top],"top")
        for a in range(top-1,-1,-1):
            print(stk[a])
def pop(stk):
    if isempty(stk):
        return underflow
    else:item=stk.pop(0)
    if len(stk)==0:
        front=rear=None
        return item
    
#_main_

stack=[]
top=None
while True:
    print("STACK OPERATIONS")
    print("1.PUSH")
    print("2.DISPLAY STACK")
    print("3.POP")
    print("4.EXIT")
    ch=int(input("Enter you choice:"))
    if ch==1:
        bno=int(input("Enter book no to be inserted:"))
        bname=input("Enter book name to be inserted:")
        item=[bno,bname]
        push(stack,item)
    elif ch==2:
        display(stack)
        input()
    elif ch==3:
        item=pop(stack)
        if item=="Underflow":
            print("Underflow !!!Stack is empty")
        else:
            print("Poped item is",item)
        input()
    elif ch==4:
            break
    else:
        print("Invalid choice")
        input()
    

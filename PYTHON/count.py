from itertools import combinations_with_replacement 
from itertools import permutations
from itertools import combinations
def ispalindrome(s):
    z=list(s)
    lst=[]
    lst.extend(z)
    lst.reverse()
    
    if lst==z:
        flag=1
    else:
        flag=0
    return flag

        
m,n =map(int, input().split())

l=[]
for i in range(1,m+1):
    l.append(i)


    
list1=[]
perm = combinations_with_replacement(l,4)

for i in list(perm): 
      list1.append(i)

list2=[]
for i in list1:
    per = permutations(i)
    for j in list(per):
        list2.append(j) 

res = [*set(list2)]
#decalring count
count=0
for i in res:
    check=ispalindrome(i)
    if check==1:
        count=count+1
    else:
        f=divide(i)
        if f==1:
            count=count+1
            
        

print("the number of palindromes are ",count)
   
    


import random
tname=["team a","team b","team c","team d","team e","team f","team g"]
no=[]
c=0
while c<len(tname):
    
    i=random.randint(1,7)
    if i not in no:
        no.append(i)
        c+=1
print("TEAM NAME     CHEST NUMBER")
for i in range(0,len(tname)):
    print(tname[i],"         ",no[i])




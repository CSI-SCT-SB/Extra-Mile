#solved code of ieee extreme 2022 ASCII DANCER 
def dance(d):
    if d[0] == 1:
        print('(',end='o')
    else:
        print(' ',end='o')
    if d[1] == 1:
        print(')')
    else:
        print(' ')
    if d[0] == 1:
        print(' ',end='|')
    elif d[0] == 2:
        print('<',end='|')
    else:
        print('/',end='|')
    if d[1] == 1:
        print(' ')
    elif d[1] == 2:
        print('>')
    else:
        print('\\')
    if d[2] == 1:
        print('<',end=' ')
    else:
        print('/',end=' ')
    if d[3] == 1:
        print('>')
    else:
        print('\\')
    

x=["right hand to head","right hand to hip","right hand to start","right leg in","right leg out","left hand to head","left hand to hip","left hand to start","left leg in","left leg out","turn"]
a = int(input())
for _ in range(a):
    d=[0,0,0,0,0]
    b = int(input()) 
    for _ in range(b):
        c = input()
        if d[4] ==0:
            if c == x[0]:
                d[0]=1
                dance(d)
            elif c == x[1]:
                d[0]=2
                dance(d)
            elif c == x[2]:
                d[0]=0
                dance(d)
            elif c == x[3]:
                d[2]=1
                dance(d)
            elif c == x[4]:
                d[2]=0
                dance(d)
            elif c == x[5]:
                d[1]=1
                dance(d)
            elif c == x[6]:
                d[1]=2
                dance(d)
            elif c == x[7]:
                d[1]=0
                dance(d)
            elif c == x[8]:
                d[3]=1
                dance(d)
            elif c == x[9]:
                d[3]=0
                dance(d)
            elif c == x[10]:
                d[4] = 1
                temp = d[0]
                d[0]= d[1]
                d[1]= temp
                temp = d[2]
                d[2]= d[3]
                d[3]= temp
                dance(d)
            elif c[:4]=="say ":
                print(c[4:])
        else:
            if c == x[0]:
                d[1]=1
                dance(d)
            elif c == x[1]:
                d[1]=2
                dance(d)
            elif c == x[2]:
                d[1]=0
                dance(d)
            elif c == x[3]:
                d[3]=1
                dance(d)
            elif c == x[4]:
                d[3]=0
                dance(d)
            elif c == x[5]:
                d[0]=1
                dance(d)
            elif c == x[6]:
                d[0]=2
                dance(d)
            elif c == x[7]:
                d[0]=0
                dance(d)
            elif c == x[8]:
                d[2]=1
                dance(d)
            elif c == x[9]:
                d[2]=0
                dance(d)
            elif c == x[10]:
                d[4] = 0
                temp = d[0]
                d[0]= d[1]
                d[1]= temp
                temp = d[2]
                d[2]= d[3]
                d[3]= temp
                dance(d)
            elif c[:4]=="say ":
                print(c[4:])

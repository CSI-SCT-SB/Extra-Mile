from random import randint
#check for ladders
def ladders(x):
    if x==2: return 25
    elif x==7: return 31
    elif x==20:return 44
    elif x==33:return 76
    elif x==41:return 96
    elif x==53:return 89
    else:return x
#check for snakes
def snakes(x): 
    if x==40:return 5
    elif x==46:return 11
    elif x==99:return 23
    elif x==70:return 27
    elif x==83:return 57
    elif x==92:return 48
    else:return x
    
def turn(player,score): #Turn function
    print()
    print("Its",player,"turn.")
    roll2=input("Press enter to Roll")
    print()
    if roll2=="":
        a=randint(1,6)#player dice roll
        print(player,"rolled the dice")
        print(player,"got a",a)
        score+=a
        if score<=100:
            lad=ladders(score) #checking for ladders for player
            if lad!=score:
                print("There's a ladder!",player,"climbed up.")
                score=lad
            snk=snakes(score)
            if snk!=score: #checking for snakes for player
                print(player,"got bitten by a snake!",player,"fall down!")
                score=snk
            print(player,"is now on box",score)    
        else: #checks if player score is not grater than 100
            score-=a
            print(player,"can't move.")
            print(player,"is still on box",score)
        if score==100:
            print()
            print(player,"Wins!")
        return score

print()
print("-------------------------SNAKES N LADDERS-------------------------")#game starts
print()
while True:
    play=input("Press Enter to Play and Exit to quit the game: ")
    if play=="":
        print("Choose your mode (Single player/Multiplayer)")#mode selection
        mode=input("Enter \"S\" for sigle player and \"M\" for multiplayer: ")
        if mode=="S" or mode== "s":
            player2="Computer"
            num_players=2
        else:
            num_players=int(input("Enter number of players: "))    
        player1=input("Enter player 1 name: ")
        if (mode=="m" or mode=="m") and 5>num_players>1:
            player2=input("Enter player 2 name: ")
        if 5>num_players>2:
            player3=input("Enter player 3 name: ")
        if 5>num_players>3:
            player4=input("Enter player 4 name: ") 
            print()
        print("Good Luck!")
        print()    
        while True:
            play2=input("Press Enter to start.")
            if play2=="":
                player1_score=player2_score=player3_score=player4_score=0
                while True:
                    if 5>num_players>1:
                        player1_score=turn(player1,player1_score)
                        if player1_score==100:
                            break
                        player2_score=turn(player2,player2_score)
                        if player2_score==100:
                            break
                    if 5>num_players>2:
                        player3_score=turn(player3,player3_score)
                        if player3_score==100:
                            break    
                    if 5>num_players>3:
                        player4_score=turn(player4,player4_score)
                        if player4_score==100:
                            break
                    print("________________________________________________________________")
                    
            break                                                
    elif play=="exit" or play=="Exit":
        break
        quit

       

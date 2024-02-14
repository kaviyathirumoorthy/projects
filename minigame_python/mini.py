import random

user=["stone","paper","scissor"]
start=1
s_u1=0
s_u=0
while(start):
    print(user)
    print("give the input as 0 1 2 which indicates stone, paper and scissor")
    k=int(input())
    u1=random.randrange(0,3)
    if(u1==k):
        print("draw")
    elif(u1==1):
        if(k==0):
            print("you lose!")
            s_u1+=1
        elif(k==2):
            print("you win!")
            s_u+=1
    elif(u1==0):
        if(k==1):
            print("you win!")
            s_u+=1
        elif(k==2):
            print("you lose!")
            s_u1+=1
    else:
        if(k==0):
            print("you win!")
            s_u+=1
        else:
            print("you lose!")
            s_u1+=1
    print("if you want to continue the game then print 1 else print 0")
    start=int(input())
    if(start==0):
        print("Thankyou for playing game!")
        if(s_u>s_u1):
            print("You win the game with "+str(s_u)+" score")
        else:
            print("you lose the game")



    
    
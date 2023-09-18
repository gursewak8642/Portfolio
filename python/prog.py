secret_no=3
count=0
while count<3:
   guess=input("guess ?")
   count+=1
   if guess=='3':
       print("You won the game")
       break
   else:
        print("you lost")

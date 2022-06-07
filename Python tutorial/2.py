percentage=int(input("Enter your percentage\n"))
if percentage >=75 :
    print("Congrats you have passed in distinction")
elif percentage >60 and percentage<75 :
    print("Good you have passed in 1st class")
elif percentage >50 and percentage<=60:
    print("You have passed in 2nd class")
elif percentage >40 and percentage <=50:
    print("You have just passed! Requires improvement")
else :
    print("Sorry you have failed. Try again. Better luck next time")
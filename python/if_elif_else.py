# x = int(input("Enter the number"))
# if x > 0:
#     print("x is a positive number")
#     print("x is a greater then zero")

# elif x == 0:
#     print("x is equal to zero")
# else:
#     print("x is less then zero")


name = str(input("Enter your name "))
a = len(name)
if a < 3:
    print("Your name is inappropriate")
elif a > 50:
    print("Your name shoul d be under only 50 characters")
else:
    print("Good luck mr ", name)

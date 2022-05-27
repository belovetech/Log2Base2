def check(num):
    if num == 0:
        print("Neither Negative nor Postive")
    elif num < 0:
        print("Negative")
    else:
        print("Positive")
        

number  = int(input("Enter a number: "))
check(number)
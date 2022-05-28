# armstrong_number - checks if a number is armstrong number or not

def armStrong(num):
    sum = 0
    tmp = num

    while num >= 1:
        mod = num % 10
        sum = sum + mod * mod * mod
        num = num // 10

    if sum == tmp:
        print("Armstrong Number")
    else:
        print("Not Armstrong Number")


num = int(input("Enter a positive number: "))
#write your code here
armStrong(num)
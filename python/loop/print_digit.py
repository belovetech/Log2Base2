# Write a program to get a positive integer number from the user and print its digits one by one.
num = int(input('Enter a positive number: '))
digit = 0

while num > 0:
    digit = num % 10
    print(digit)
    num = num // 10

# Write a program to get a positive integer from the user and print the sum of all digits.
num = int(input('Enter a positive number: '))
last_digit = 0
sum = 0

while num > 0:
    last_digit = num % 10
    sum += last_digit
    num = num // 10

print(sum)
    
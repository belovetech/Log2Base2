# prints the sum of number entered by user before negative number
sum = 0
while True:
    num = int(input('Enter a positive number: '))
    
    if num < 0:
        break
    else:
        sum += num

print(sum)
    
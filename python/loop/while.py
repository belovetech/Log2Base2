num = int(input('Enter a number: '))
count = 0

while num > 1:
    num = num >> 1
    count += 1

print(count)
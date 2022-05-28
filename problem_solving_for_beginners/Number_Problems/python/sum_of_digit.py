num = int(input("Enter any positive number"))
#write your code here
sum = 0
while (num >= 1):
    res = num % 10
    sum += res
    num = num // 10
    
print(sum)
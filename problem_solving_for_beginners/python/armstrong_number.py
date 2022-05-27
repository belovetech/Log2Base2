num = int(input("Enter a positive number: "))
#write your code here
sum = 0
tmp = num

while num >= 1:
    mod = num % 10
    sum = sum + mod * mod * mod
    num = num // 10

print(sum, tmp)
if sum == tmp:
    print("Armstrong Number")
else:
    print("Not Armstrong Number")
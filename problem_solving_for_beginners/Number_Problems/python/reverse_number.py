num = int(input("Enter a positive number: "))
#write your code here
ans = 0
while num >= 1:
    mod = num % 10
    ans = ans * 10 + mod
    num = num // 10

print(ans)
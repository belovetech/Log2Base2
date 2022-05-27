num = int(input("Enter a positive number: "))
#write your code here
ans = 0 
cube = 0
tmp = num

while num >= 1:
    mod = num % 10
    cube = mod * mod * mod
    ans = ans + cube
    num = num // 10
    
print(ans, tmp)
if ans == tmp:
    print("Armstrong Number")
else:
    print("Not Armstrong Number")
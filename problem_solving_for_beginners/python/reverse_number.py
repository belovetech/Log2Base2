num = int(input("Enter a positive number: "))
#write your code here
while num >= 1:
    res = num % 10
    if res == 0:
        pass
    else:
        print(res)
    num = num // 10

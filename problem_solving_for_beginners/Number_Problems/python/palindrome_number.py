def palindrome_number(num):
    ans = 0
    tmp = num
    
    while num >= 1:
        mod = num % 10
        ans = ans * 10 + mod
        num = num // 10
    
    if tmp == ans:
        print("Palindrome")
    else:
        print("Not Palindrome")

num = int(input("Enter a positive number: "))
palindrome_number(num)

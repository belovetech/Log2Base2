def factorial(n):
    if n <= 1:
        return n
    return n * factorial(n - 1)
        

num = int(input("Enter a number: "))

if num >= 0:
    ans = factorial(num)
    print(ans)
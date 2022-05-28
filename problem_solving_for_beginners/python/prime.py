# checks for a prime number 
def isprime(num):
    for i in range(2, num, 1):
        if num % i == 0:
            flag = 1
            break
        else:
            flag = 0
    return flag

def print_prime(flag):
    if flag == 0:
        print("Prime number")
    else:
        print("Not a Prime number")
        

num = int(input("Enter a positive number: "))
flag = isprime(num)
print_prime(flag)

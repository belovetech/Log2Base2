# checks for a prime number 
def isprime(num):
    flag = 0
    for i in range(2, num):
        if num % i == 0:
            flag = 1
            break
    return flag

def print_prime(flag):
    if flag == 0:
        print("Prime number")
    else:
        print("Not a Prime number")
        

num = int(input("Enter a positive number: "))
flag = isprime(num)
print_prime(flag)

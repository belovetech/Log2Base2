import math

def isPerfect(n):
    if n < 1:
        print("Enter a positive number")
    else:
        sqr = int(math.sqrt(n)) + 1
        res = 1
        for i in range (2, sqr):
            if n % i == 0:
                tmp = n // i
                res += i + tmp
        return res


n = int(input("Enter a positive number: "))

res = isPerfect(n)

if res == n:
    print("Yes")
else:
    print("No")

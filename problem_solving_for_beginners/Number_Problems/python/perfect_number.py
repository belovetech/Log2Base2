import math

def isPerfect(n):
    root = int(math.sqrt(n))
    res = 1
    for i in range (2, root+1):
        if n % i == 0:
            if n // i == i:
                res = res + i
            else:
                res = res + i + n // i
    return res


n = int(input("Enter a positive number: "))

res = isPerfect(n)

if res == n:
    print("Yes")
else:
    print("No")

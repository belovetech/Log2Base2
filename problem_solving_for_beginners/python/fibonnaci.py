def fibonnaci(n):
    a = 0
    b = 1

    for i in range (0, n, 1):
        if i == 0:
            print(i, end=" ")
        elif i == 1:
            print(i, end=" ")
        else:
            c = a + b
            print(c, end=" ")
            a = b
            b = c
            
            
n = int(input("Enter a number: "))
#write your code here
fibonnaci(n)
print()
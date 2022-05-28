def fibonnaci(n):
    a = 0
    b = 1

    for i in range (0, n, 1):
        print(a, end=" ")
        c = a + b
        a = b
        b = c
            
            
n = int(input("Enter a number: "))
#write your code here
fibonnaci(n)
print()
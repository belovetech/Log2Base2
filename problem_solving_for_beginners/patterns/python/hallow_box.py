n = int(input("Enter a positive number: "))
#write your code here
for i in range(n):
    for j in range(n):
        if j == 0 or i == 0 or j == n-1 or i == n-1:
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print()
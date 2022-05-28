
n = int(input("Enter a positive number: "))
#write your code here
for i in range(n):
    for j in range(n):
        if i == j or i+j == n-1:
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print()
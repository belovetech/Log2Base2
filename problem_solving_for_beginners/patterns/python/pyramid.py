# prints pyramid pattern

n = int(input("Enter a positive number: "))
#write your code here
for i in range(1, n+1):
    for j in range(i):
        print("*", end=" ")
    print()
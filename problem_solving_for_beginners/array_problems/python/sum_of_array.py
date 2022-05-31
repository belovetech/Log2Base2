# Sum of the elements of array

arr = []
n = int(input("Enter the size of array: "))
sum = 0 

for i in range(n):
    i = int(input("Enter element of array: "))
    arr.append(i)

for i in arr:
    sum += i;

print(f"Sum = {sum:d}")
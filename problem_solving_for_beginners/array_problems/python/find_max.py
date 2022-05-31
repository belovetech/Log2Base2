# Find max elements in array

arr = []
n = int(input("Enter the size of array: "))
max = 0

for i in range(n):
    i = int(input("Enter element of array: "))
    arr.append(i)
    
#write your code here
max = arr[0]
for i in arr:
    if i > max:
        max = i

print(f"Max = {max}")
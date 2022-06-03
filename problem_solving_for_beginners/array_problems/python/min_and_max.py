#!/usr/bin/python3
"""Find min and max in elements of array"""
arr = []
n = int(input("Enter a size of array: "))

for i in range(n):
    i = int(input("Enter element of array: "))
    arr.append(i)

#write your code here
max = arr[0]
min = arr[0]

for i in arr:
    if i > max:
        max = i
        
    if i < min:
        min = i

print(f"Max = {max}")
print(f"Min = {min}")
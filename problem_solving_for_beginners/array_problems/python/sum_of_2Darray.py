#!/usr/bin/python3
"""Sum of elements of 2D array"""
arr = []
n = int(input("Enter a size of array: "))

for i in range(n):
    col = []
    for j in range(n):
        j = int(input("Enter element of array: "))
        col.append(j)
    arr.append(col)

#write your code here
sum = 0
for i in range(n):
    for j in range(n):
        sum += arr[i][j]

print(sum)
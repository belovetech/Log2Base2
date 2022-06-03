#!/usr/bin/python3
"""Search a key in elements of array"""
arr = []
n = int(input("Enter a size of array: "))

for i in range(n):
    i = int(input("Enter element of array: "))
    arr.append(i)


key = int(input("Enter a key: "))
flag = 0

for i in range(n):
    if arr[i] == key:
        flag = 1
        break
        
if flag == 1:
    print("Key found")
else:
    print("Key not found")
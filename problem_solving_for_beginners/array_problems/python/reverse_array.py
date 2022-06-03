#!/usr/bin/python3
"""Reverse array elements"""
arr = []
n = int(input("Enter a size of array: "))

for i in range(n):
    i = int(input("Enter element of array: "))
    arr.append(i)

#write your code here
half =  n // 2
lastindex = n - 1

for i in range(half):
    tmp = arr[i]
    arr[i] = arr[lastindex - i]
    arr[lastindex - i] = tmp

for i in arr:
    print(i)
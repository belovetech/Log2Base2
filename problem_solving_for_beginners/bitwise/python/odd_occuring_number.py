#!/usr/bin/python3
"""
Find odd occuring of a number
in a given array using bitwise
"""
arr = [7, 1, 1, 1, 1, 6, 4, 4]
size = 8

res = arr[0]
for i in range(size):
    res = res ^ arr[i]

print(res)


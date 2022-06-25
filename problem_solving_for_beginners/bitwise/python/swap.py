#!/usr/bin/python3
"""Swap two integers using bitwise XOR operator"""

num1, num2 = input("Enter two positive integers: ").split()

print("............Before swapping..........")
print(num1, num2)

num1 = int(num1)
num2 = int(num2)

num1 = num1 ^ num2
num2 = num1 ^ num2
num1 = num1 ^ num2


print("............After swapping..........")
print(num1, num2)
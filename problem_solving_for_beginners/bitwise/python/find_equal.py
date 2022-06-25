#!/usr/bin/python3
"""Finds equal or not equal using bitwise XOR operator"""

num1, num2 = input("Enter two positive integers: ").split()

if (int(num1) ^ int(num2)) == 0:
    print("Equal")
else:
    print("Unequal")
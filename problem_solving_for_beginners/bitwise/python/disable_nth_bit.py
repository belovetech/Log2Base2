#!/usr/bin/python3
"""
    Disable nth bit of a given number using
    bitwise AND and LEFT SHIFT operators
"""
num, n = input("Enter Number and nth bit to disable: ").split()
num = int(num)
n = int(n) - 1

res  = num & ~(1 << n)

print(res)
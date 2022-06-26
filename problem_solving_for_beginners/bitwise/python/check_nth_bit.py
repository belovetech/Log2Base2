#!/usr/bin/python3
"""
    Checks nth bit if it's set or unset using 
    bitwise OR and LEFT SHIFT operators
"""

num, n = input("Enter Number and nth bit to enable: ").split()
num = int(num)
n = int(n) - 1

res = num & (1 << n)

if res:
    print("ON")
else:
    print("OFF")
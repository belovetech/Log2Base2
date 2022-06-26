#!/usr/bin/python3
"""Enable nth bit using bitwise OR and LEFT SHIFT operators"""

num, n = input("Enter Number and nth bit to enable: ").split()
num = int(num)
n = int(n) - 1

res = num | (1 << n)

print(res)
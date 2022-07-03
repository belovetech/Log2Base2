#!/usr/bin/python3
"""
    Toggle nth bit of a given number using
    bitwise XOR and LEFT SHIFT operators
"""
num = int(input("Enter a number: "))
n = int(input("Enter nth bit to toggle: "))

n = n - 1
res =  num ^ (1 << n)

print(res)
#!/usr/bin/python3
"""Checks if num is Even or Odd number."""

num = int(input("Enter a positive integer: "))

if (num & 1) == 0:
    print("Even")
else:
    print("Odd")

#!/usr/bin/python3
str1 = input("Enter a string: ")
copy_str1 = 'Hey '

"""Copy one string to another string"""
for ch in str1:
    copy_str1 +=  ch

print("Copied string = {:s}".format(copy_str1))
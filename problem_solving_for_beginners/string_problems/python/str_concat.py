#!/usr/bin/python3
str1 = input("Enter first string: ")
str2 = input("Enter second string: ")
str3 = ''

"""String concatenation"""
for ch in str1:
    str3 += ch

for ch2 in str2:
    str3 += ch2
    
print(str3)

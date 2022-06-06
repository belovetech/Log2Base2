#!/usr/bin/python3
str1 = input("Enter a string: ")
strlen = 0
newstr = ""

for i in str1:
    strlen += 1

"""Change uppercase to lowercase and vice versa"""
# for i in range(strlen):
for ch in str1:
    if (ch >= 'A') and (ch <= 'Z'):
        newstr += chr(ord(ch) + 32)
    elif (ch >= 'a') and (ch <= 'z'):
        newstr += chr(ord(ch) - 32)

print(newstr)


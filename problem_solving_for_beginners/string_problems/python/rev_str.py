#!/usr/bin/python3
def length(string):
    """Length of a string"""
    count = 0
    for i in string:
        count += 1
    return count

def rev_str(string):
    """Reverse string"""
    rev_str = ''
    strlen = length(string)
    for i in range(1, strlen + 1):
        rev_str += string[-i]
    print(rev_str)

def rev_str2(string):
    """Reverse string"""
    rev_str = str1[::-1]
    print(rev_str)

def rev_str3(string):
    """Reverse string"""
    rev_str = ''
    strlen = length(string)
    for i in range(strlen):
        rev_str = string[i] + rev_str
    print(rev_str)

str1 = input("Enter a string: ")
print(str1)
rev_str(str1)
rev_str2(str1)
rev_str3(str1)


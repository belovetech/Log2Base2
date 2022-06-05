#!/usr/bin/python3
str1 = input("Enter first string: ")
str2 = input("Enter second string: ")

len1 = 0
len2 = 0
flag = 0

for i in str1:
    len1 += 1

for i in str2:
    len2 += 1

"""Compares two string"""
if len1 ==  len2:
    for i in range(len1):
        if str1[i] != str2[i]:
            flag += 1
            print("No")
            break
    else:
        print("Yes")
else:
    print("No")
        
       

#!/usr/bin/python3
"""Count vowels in a string"""

str1 = input("Enter a string: ")
length = 0

for i in str1:
	length += 1
#write your code here
vowels = ['a', 'e', 'i', 'o', 'u']
count = 0

for ch in str1:
    if ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u':
            count += 1

print(count)
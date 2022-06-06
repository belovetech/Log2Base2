#!/usr/bin/python3
def length(string):
    """Length of a string"""
    count = 0
    for i in string:
        count += 1
    return count

def palindrome(string):
    """Copy string"""
    copy = str1[:]
    """Reverse string"""
    rev_str = str1[::-1]
    """Compare copied and reversed string"""
    if (length(copy) == length(rev_str)):
        for i in range(length(str1)):
            if rev_str[i] != copy[i]:
                print("Not Palindrome")
                break
        else:
            print("Palindrome")
    else:
        print("Not Palindrome")

def palindrome2(string):
    flag = 1
    strlen = length(string)
    lastidx = strlen - 1
    for i in range(strlen//2):
        if string[i] != string[lastidx - i]:
            flag = 0
            print("Non Palindrome")
            break
        else:
            print("Palindrome")

if __name__ == "__main__":
    str1 = input("Enter a string: ")
    # palindrome(str1)
    palindrome2(str1)





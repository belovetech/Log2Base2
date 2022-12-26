"""
Reverse a string without affecting special characters
"""

def isAlphabet(ch):
    """Check if a character is alphabet or not
    Args:
        ch(str) - Character to check
    """
    return ((ch >= 'A' and ch <= 'Z') or (ch >= 'a' and ch <= 'z'))
    

def reverse(str):
    """ Reverse a string without the special character
    
    Args:
        str(str) - String to reverse
    """
    temp = list(str)
    start = 0;
    end = len(str)-1
    
    while start < end:
        if (isAlphabet(temp[start])) != 1:
            start += 1
        elif (isAlphabet(temp[end])) != 1:
            end -= 1
        else:
            temp[start], temp[end] = temp[end], temp[start]
            start += 1
            end -= 1
    
    return ''.join(temp)


if __name__ == '__main__':
    text = "H&ell^o"
    print(reverse(text))
    
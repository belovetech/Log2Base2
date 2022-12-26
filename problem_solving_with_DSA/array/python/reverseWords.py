"""
Reverse words
"""
def _len(str):
    """ Lenght of a string
    Args:
        str (str): The string to find its length
    """
    length = 0
    for _ in str:
        length += 1
    return  length


def reverse(str, start, end):
    """ Reverse arary elements
    
    Args:
        str (str[chr]) - String to reverse
        start (int): First index of the string
        end (int): Last index of the string
    """
    word = ""
    
    for i in reversed(range(start, end+1)):
        word += str[i];
    
    return word
    

def reverseWords(str):
    """ Reverse individual words
    Args:
        str (str): The string to reverse its words
    """
    len = _len(str) 
    wstart = 0
    words = ""
    
    for i in range(len):
        if str[i] == ' ':
            words += reverse(str, wstart, i-1)
            words += ' '
            wstart = i + 1
    words += reverse(str, wstart, len-1)
    
    return words

if __name__ == '__main__':
    text = "Hello world"
    print(reverseWords(text))
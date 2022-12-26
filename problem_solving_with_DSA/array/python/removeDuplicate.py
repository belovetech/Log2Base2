"""
An in-place algorithm to Remove duplicate in a sorted array
"""

def rmDuplicates(arr ,n):
    """Remove duplicate in a sorted array
    
    Args:
        arr (arr[int]): Sorted array
        n (int) -  Size of the array
        
    Return: length of the new array
    """
    if n==0 or n==1:
        return n
    
    len = 0
    for i in range(n-1):
        if arr[i] != arr[i+1]:
            arr[len] = arr[i]
            len += 1
    arr[len] = arr[n-1]
    len += 1
    return len
    
def printArray(arr, n):
    """Print array
    
    Args:
        arr (arr[int]): array
        n (int) -  Size of the array
    """
    print('[', end="")
    for i in range(n):
        if i < n-1:
            print("{}, ".format(arr[i]), end="")
        else:
            print("{}]".format(arr[i]))

if __name__ == '__main__':
    input = [1, 1, 1, 2, 2, 2, 3, 3]
    len = 8
    
    printArray(input, len)
    newLen = rmDuplicates(input, len);
    printArray(input, newLen)

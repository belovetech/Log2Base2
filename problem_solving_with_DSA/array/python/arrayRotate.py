"""
Rotate Array by K position using normal method and reverse method
"""
def rightRotate(arr, n):
    """ Shift Array to the right side by 1 position
    
    Args:
        arr (arr[int]) - Array to rotate
        n (int): Size of the array
    """
    temp = arr[n-1]
    # for i in range(n-1, 0, -1):
    for i in reversed(range(1, n)):
        arr[i] = arr[i-1]
    arr[0] = temp
        

def arrayRotate(arr,n,k):
    """ Rotate array by k Position using normal methods
    
    Args:
        arr (arr[int]) - Array to rotate
        n (int): Size of the array
        k (int): Number of times the array needs to be rotated
    """
    if n <= 1:
        return
    while k > 0:
        rightRotate(arr, n)
        k -= 1
        
def reverse(arr, start, end):
    """ Reverse arary elements
    
    Args:
        arr (arr[int]) - Array to rotate
        start (int): First index of the array
        end (int): Last index of the array
    """
    while start < end:
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1

def arrayRotate2(arr,n,k):
    """ Rotate array by k Position using normal methods
    
    Args:
        arr (arr[int]) - Array to rotate
        n (int): Size of the array
        k (int): Number of times the array needs to be rotated
    """
    reverse(arr, 0, n-k-1)
    reverse(arr, n-k, n-1)
    reverse(arr, 0, n-1)        

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
    arr = [1, 2, 3, 4, 5]
    len = len(arr)
    
    print("<<<Before rotation>>>")
    printArray(arr, len)
    
    k = int(input("Enter Rotation position\n"))
    arrayRotate2(arr, len, k);
    
    print("<<<After rotation>>>")
    printArray(arr, len)
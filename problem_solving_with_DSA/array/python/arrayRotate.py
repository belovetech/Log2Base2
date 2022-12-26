"""
Rotate Array by K position
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
    """ Rotate array by k Position
    
    Args:
        arr (arr[int]) - Array to rotate
        n (int): Size of the array
        k (int): Rotation position
    """
    if n <= 1:
        return
    while k > 0:
        rightRotate(arr, n)
        k -= 1
        
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
    arrayRotate(arr, len, k);
    
    print("<<<After rotation>>>")
    printArray(arr, len)
import sys

def smallLengthSubarraySum(arr, n, S):
    """Find the smallest length of subarray >= the value of S
    """
    wstart = 0
    subSum = 0
    length = sys.maxsize
    for i in range(n):

        subSum += arr[i]
        while subSum >= S:
            currentWindowSize = i - wstart + 1
            if length > currentWindowSize:
                length = currentWindowSize

            subSum -= arr[wstart]
            wstart += 1

    length if length == sys.maxsize else length

    return length


if __name__ == "__main__":
    arr = [4, 1, 5, 2, 4, 1, 7]
    size = len(arr)
    S = 7

    min = smallLengthSubarraySum(arr, size, S)
    print(min)

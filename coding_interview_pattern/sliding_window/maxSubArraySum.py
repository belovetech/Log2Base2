def maxSubArraySum(arr, n, K):
    """Compute subarray sum of size K
    """
    wstart = 0
    subSum = 0
    max = 0

    for i in range(n):
        subSum += arr[i]
        if i >= K-1:
            if max < subSum:
                max = subSum
            subSum -= arr[wstart]
            wstart += 1
    return max

if __name__ == "__main__":
    arr = [1, 5, -1, 6, 3, 2]
    size = len(arr)
    K = 3

    max = maxSubArraySum(arr, size, K)
    print(max)

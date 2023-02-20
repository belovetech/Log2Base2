def subArraySum(arr, n, K):
    """Compute subarray sum of size K
    """
    wstart = 0
    res = []
    subSum = 0

    for i in range(n):
        subSum += arr[i]
        if i >= K-1:
            res.append(subSum)
            subSum -= arr[wstart]
            wstart += 1
    return res

if __name__ == "__main__":
    arr = [1, 5, -1, 6, 3, 2]
    size = len(arr)
    K = 2

    res = subArraySum(arr, size, K)
    print(res)

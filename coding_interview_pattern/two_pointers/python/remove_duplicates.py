#!/usr/bin/python3
"""remove duplicate at most twice in a sorted array
"""
from typing import List

def removeDuplicate(arr: List[int], n: int) -> int:

    if n <= 2: return n

    Len = 0
    arr[Len] = arr[0]
    Len += 1

    for i in range(1, n-1):
        if arr[i-1] != arr[i+1]:
            arr[Len] = arr[i]
            Len += 1
    arr[Len] = arr[n-1]
    Len += 1

    return Len



if __name__ == "__main__":
    arr = [1,1,1,3,3,3,5,5]
    size = len(arr)

    print(arr)

    res = removeDuplicate(arr, size)
    print(res)

    print(arr[:res])

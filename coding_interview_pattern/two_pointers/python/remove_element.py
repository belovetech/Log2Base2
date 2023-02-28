#!/usr/bin/python3
"""remove occurence of value in array
then return the new length
"""
from typing import List

def removeElement(arr: List[int], n: int, val: int) -> int:
    newLen = 0

    for i in range(n):
        if arr[i] != val:
            arr[newLen] = arr[i]
            newLen += 1
    return newLen



if __name__ == "__main__":
    arr = [4,7,6,7,8,7,7]
    size = len(arr)
    val = 7

    print(arr)

    res = removeElement(arr, size, val)
    print(res)

    print(arr[:res])

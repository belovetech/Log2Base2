#!/usr/bin/python3
"""remove occurence of value in array
then return the new length
"""
from typing import List

def removeDuplicate(arr: List[int], n: int) -> int:

    if n == 0 or n == 1: return n

    newLen = 0

    for i in range(n-1):
        if arr[i] != arr[i+1]:
            arr[newLen] = arr[i]
            newLen += 1
    arr[newLen] = arr[n-1]
    newLen += 1

    return newLen



if __name__ == "__main__":
    arr = [1,1,1,3,3,5,5]
    size = len(arr)

    print(arr)

    res = removeDuplicate(arr, size)
    print(res)

    print(arr[:res])

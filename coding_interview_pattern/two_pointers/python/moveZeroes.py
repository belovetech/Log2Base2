#!/usr/bin/python3
"""remove occurence of value in array
then return the new length
"""
from typing import List

def moveZeroes(arr: List[int], n: int) -> None:
    newLen = 0

    for i in range(n):
        if arr[i] != 0:
            arr[newLen] = arr[i]
            newLen += 1

    while newLen < n:
        arr[newLen] = 0
        newLen += 1



if __name__ == "__main__":
    arr = [1, 0, 1, 0, 1, 1]
    size = len(arr)

    print(arr)
    moveZeroes(arr, size)
    print(arr)

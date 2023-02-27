#!/usr/bin/python3
"""Check if a sorted array has a pair whose sum equal to target
"""
from typing import List


def hasPairWithTarget(arr: List[int], n: int, target: int) -> int:
    start = 0
    end = n - 1
    sum = 0

    while start < end:
        sum = arr[start] + arr[end]

        if sum == target:
            return 1
        elif sum < target:
            start += 1
        else:
            end -= 1
    return 0


if __name__ == "__main__":
    arr = [1,5,10,20,80]
    size = len(arr)
    target = 90

    res = hasPairWithTarget(arr, size, target)
    print(res)

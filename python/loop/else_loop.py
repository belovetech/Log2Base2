# checks if all element of num is even
nums = [2, 4, 8, 6]

for x in nums:
    if x % 2 == 1:
        break
else:
    print('All Even!')
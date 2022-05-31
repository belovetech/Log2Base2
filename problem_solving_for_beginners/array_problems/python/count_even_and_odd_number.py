# Count even and odd number in the element of array 
arr = []
size = int(input("Enter size of array: "))
even_number_count = odd_number_count = 0

for i in range(size):
    i = int(input("Enter Element of array: "))
    arr.append(i)
    
#write your code here
for i in arr:
    if i % 2 == 0:
        even_number_count += 1
    else:
        odd_number_count += 1
        
print(f"Even Number Count = {even_number_count:d}")
print(f"Odd Number Count = {odd_number_count:d}")
    